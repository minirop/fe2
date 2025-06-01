#!/usr/bin/env python

import os, sys, re

mapping = {}
tenten = {}
maru = {}

dir_path = os.path.dirname(os.path.realpath(__file__))

with open(f'{dir_path}/kana.tbl', 'r') as f:
    for line in f:
        data = line.rstrip().split(' ')

        if len(data) > 2:
            match data[2]:
                case '0F':
                    tenten[mapping[data[1]]] = data[0]
                case '1F':
                    maru[mapping[data[1]]] = data[0]
                case _:
                    raise ValueError(data[2])
        else:
            mapping[data[1]] = data[0]

def decode(code):
    c = code.split(' ')
    output = []
    for cc in c:
        match cc:
            case '0F':
                output[-1] = tenten[output[-1]]
            case '1F':
                output[-1] = maru[output[-1]]
            case 'FF':
                output += ' '
            case _:
                output += mapping[cc]

    print ("ENCODE(\"{}\")".format(''.join(output)))


# print: ENCODE("アルム")
decode('30 5A 52')

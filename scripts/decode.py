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
    in_string = False
    in_e8 = False
    for cc in c:
        if in_e8:
            if cc != 'EA':
                output += f" ${cc}"
                continue
            else:
                in_e8 = False
        match cc:
            case '0F':
                output[-1] = tenten[output[-1]]
            case '1F':
                output[-1] = maru[output[-1]]
            case 'FF':
                if not in_string:
                    in_string = True
                    output += ".db ENCODE(\""
                output += ' '
            case _:
                if cc in mapping:
                    if not in_string:
                        in_string = True
                        output += ".db ENCODE(\""
                    output += mapping[cc]
                else:
                    if in_string:
                        in_string = False
                        output += "\")\n"
                    match cc:
                        case 'E6':
                            output += ".db $E6\n"
                        case 'E8':
                            output += ".db $E8"
                            in_e8 = True
                        case 'EA':
                            output += ".db SPEAK\n"
                        case 'ED':
                            output += ".db NEWLINE\n"
                        case 'EE':
                            output += ".db WAIT_CLICK\n"
                        case 'EF':
                            output += ".db $EF\n"
                        case 'F0':
                            output += ".db $F0\n"
                        case _:
                            output += f" ${cc}"

    if in_string:
        output += "\")"
    print (''.join(output))


# print: ENCODE("アルム")
decode('30 5A 52')

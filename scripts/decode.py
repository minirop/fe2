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
                    output += " ENCODE(\""
                output += ' '
            case _:
                if cc in mapping:
                    if not in_string:
                        in_string = True
                        output += " ENCODE(\""
                    output += mapping[cc]
                else:
                    if in_string:
                        in_string = False
                        output += "\")"
                    match cc:
                        case 'E6':
                            output += "\n.db $E6\n.db"
                        case 'E8':
                            output += " $E8"
                            in_e8 = True
                        case 'EA':
                            output += "\n.db SPEAK\n.db"
                        case 'ED':
                            output += "\n.db NEWLINE\n.db"
                        case 'EE':
                            output += "\n.db WAIT_CLICK\n.db"
                        case 'EF':
                            output += "\n.db $EF\n"
                        case 'F0':
                            output += "\n.db $F0\n.db"
                        case _:
                            output += f" ${cc}"

    if in_string:
        output += "\")"
    print (''.join(output))


# print: ENCODE("アルム")
decode('30 5A 52')

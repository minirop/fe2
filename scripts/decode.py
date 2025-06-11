#!/usr/bin/env python

import os, sys, re

mapping = {}
tenten = {}
maru = {}
characters = {
    '01': 'ALM',
    '02': 'CELICA',
    '03': 'MYCEN',
    '04': 'NOMA',
    '05': 'LUKAS',
    '06': 'KLIFF',
    '07': 'TOBIN',
    '08': 'GRAY',
    '09': 'CLAIR',
    '0A': 'CLIVE',
    '0B': 'CLIVE_B',
    '0C': 'FORSYTH',
    '0D': 'MAE',
    '0E': 'SILQUE',
    '0F': 'GENNY',
    '10': 'BOEY',
    '11': 'KAMUI',
    '12': 'VALBAR',
    '13': 'MATHILDA',
    '14': 'PYTHON',
    '15': 'LEO',
    '16': 'ATLAS',
    '17': 'JESSE',
    '18': 'FORSYTH_18',
    '19': 'SONYA',
    '1A': 'DEEN',
    '1B': 'SABER',
    '1C': 'LUTHIER',
    '1D': 'DELTHEA',
    '1E': 'TATIANA',
    '1F': 'CATRIA',
    '20': 'PALLA',
    '21': 'EST',
    '22': 'ZEKE',
    '23': 'SHADOW',
    '24': 'WOMAN',
    '25': 'BOY',
    '26': 'GIRL',
    '86': 'DUMA'
}

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
    for cc in c:
        match cc:
            case '0F':
                output[-1] = tenten[output[-1]]
            case '1F':
                output[-1] = maru[output[-1]]
            case 'FF':
                if not in_string:
                    in_string = True
                    output += "ENCODE(\""
                output += ' '
            case _:
                if cc in mapping:
                    if not in_string:
                        in_string = True
                        output += "ENCODE(\""
                    output += mapping[cc]
                else:
                    if in_string:
                        in_string = False
                        output += "\")\n"
                    match cc:
                        case 'E6':
                            output += ".db $E6\n"
                        case 'EA':
                            output += "SPEAK\n"
                        case 'ED':
                            output += "NEWLINE\n"
                        case 'EE':
                            output += "WAIT_CLICK\n"
                        case 'EF':
                            output += "STOP\n"
                        case _:
                            output += f" ${cc}"

    if in_string:
        output += "\")"
    print (''.join(output))


# print: ENCODE("アルム")
decode('30 5A 52')

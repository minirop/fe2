#!/usr/bin/env python

import os, sys, re

mapping = {}

dir_path = os.path.dirname(os.path.realpath(__file__))

with open(f'{dir_path}/kana.tbl', 'r') as f:
    for line in f:
        data = line.rstrip().split(' ')
        mapping[data[0]] = data[1:]

def mapper(match):
    jp = match.group(1)
    output = [".db"]
    percent = False
    for c in jp:
        if percent:
            match c:
                case '0' | '1' | '2' | '3':
                    output.append("$EC")
                    output.append(f"$0{c}")
                case '%':
                    output.append(mapping[c])
                case _:
                    raise ValueError(f"Only numbers 0 to 3 and '%' are possible after a '%'. got '{c}'.")
            percent = False
        elif c == ' ':
            output.append("$FF")
        elif c == '%':
            percent = True
        else:
            for code in mapping[c]:
                output.append(f"${code}")
    return " ".join(output)

p = re.compile('ENCODE\\("([^"]+)"\\)')
with open(sys.argv[1], 'r') as input, open(sys.argv[2], 'w') as output:
    for line in input:
        l = p.sub(mapper, line)
        output.write(l)

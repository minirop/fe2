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
    output = []
    for c in jp:
        for code in mapping[c]:
            output.append(f"${code}")
    output.append("$EF")
    return " ".join(output)

p = re.compile('ENCODE\\("([^"]+)"\\)')
with open(sys.argv[1], 'r') as input, open(sys.argv[2], 'w') as output:
    for line in input:
        l = p.sub(mapper, line)
        output.write(l)

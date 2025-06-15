#!/usr/bin/env python

'''
This script simply counts how many $ are detected in lines starting with .db
- The first column counts them all
- The second only counts them if they are alone on their line

The second counter is a crude way to not count bytes
that have been (kinda) "confirmed" as being data
'''

import glob, os

banksize = 0x4000

counter = 0
files = []
for file in glob.glob("../src/bank*.asm.inc"):
	with open(file) as f:
		local_counter = 0
		local_sole_counter = 0
		for line in f.readlines():
			if line.startswith(".db "):
				local_counter += line.count('$')
				if line.count('$') == 1:
					local_sole_counter += 1

		counter += local_counter
		files.append((file[7:-4], local_counter, local_sole_counter))

files = sorted(files, key=lambda tup: tup[0])
for (name, count, sole_counter) in files:
	progress = 100 * count / banksize
	sole_progress = 100 * sole_counter / banksize
	print(f"{name}: {banksize - count:>5}/{banksize} ({100 - progress:.2f}%) | {banksize - sole_counter:>5}/{banksize} ({100 - sole_progress:.2f}%)")

print("-" * 57)

codesize = banksize * 16
progress = 100 * (codesize - counter) / codesize
sole_progress = 100 * (codesize - sole_counter) / codesize
print(f"Total:      {codesize - counter:>5}/{codesize}: {progress:.2f}% | {codesize - sole_counter:>5}/{codesize}: {sole_progress:.2f}%")

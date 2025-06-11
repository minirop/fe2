def rom():
	with open("../baserom.nes", 'rb') as file:
		rom = bytearray(file.read())
	return rom

HEADER_SIZE = 16
def cpu_to_prg(addr):
	bank = (addr & 0xff0000) >> 2
	addr = (addr & 0x3fff) + bank
	return addr + HEADER_SIZE

def prg_to_cpu(addr):
	addr = addr - HEADER_SIZE
	bank = (addr & (~0x3fff)) << 2
	addr = (addr & 0x3fff) + 0x8000 + (bank)
	return addr

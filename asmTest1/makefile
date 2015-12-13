runme:	test1.cpp asm.o
	g++ test1.cpp asm.o -o runme
asm.o:	asm.asm
	nasm -f elf asm.asm

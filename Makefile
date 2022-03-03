all: bit

run: bitpattern
	clear ; ./test
bit: bit.c
	cc -o $@ $^ -lm
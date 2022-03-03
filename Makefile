all: bitpattern

run: bitpattern
	clear ; ./test

bitpattern: bitpattern.c
	cc -o $@ $^ -lm
all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: t1.bin t2.bin t3.bin t4.bin t5.bin

t1.bin:
	gcc -g src/t1.c -o dist/t1.bin
t2.bin:
	gcc -g src/t2.c -o dist/t2.bin
t3.bin:
	gcc -g src/t3.c -o dist/t3.bin
t4.bin:
	gcc -g src/t4.c -o dist/t4.bin
t5.bin:
	gcc -g src/t5.c -o dist/t5.bin

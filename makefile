all: run execute clean

run: main.c
	gcc -o main main.c
	 
execute: main.c
	./main
	
clean: main.c
	rm main

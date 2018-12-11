all: program1 program2 program3 my_string.o

my_string.o: my_string.c my_string.h
	clang -c my_string.c
	
program1.o: program1.c
	clang -c program1.c
	
program1: program1.o my_string.o
	clang program1.c my_string.o -o program1
	
program2.o: program2.c
	clang -c program2.c
	
program2: program2.o my_string.o
	clang program2.c my_string.o -o program2

program3.o: program3.c
	clang -c program3.c

program3: program3.o my_string.o
	clang program3.c my_string.o -o program3
	
program4.o: program4.c
	clang -c program4.c
	
program4: program4.o my_string.o
	clang program4.c my_string.o -o program4
	
	
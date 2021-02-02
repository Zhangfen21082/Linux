test.exe:main.o test.o
	gcc main.o test.o -o test.exe 
main.o:main.c
	gcc -c main.c -o main.o
test.o:test.c
	gcc -c test.c -o test.o

.PHONY:clean
clean:
	rm fv *.o test.exe

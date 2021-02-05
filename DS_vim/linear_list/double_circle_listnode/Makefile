dslistnode.exe:dslistnode.o test.o
	gcc dslistnode.o test.o -g -o dslistnode.exe 
dslistnode.o:dslistnode.c
	gcc -c dslistnode.c -g -o dslistnode.o
test.o:test.c
	gcc -c test.c -g -o test.o

.PHONY:clean
clean:
	rm -fv *.o dslistnode.exe

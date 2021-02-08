heap.exe:test.o heap.o
	gcc test.o heap.o -g -o heap.exe
test.o:test.c
	gcc -c test.c -g -o test.o
heap.o:heap.c
	gcc -c heap.c -g -o heap.o

.PHONY:clean
clean:
	rm -fv *.o heap.exe
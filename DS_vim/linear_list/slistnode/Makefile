SlistNode.exe:SlistNode.o test.o
	gcc SlistNode.o test.o -g -o SlistNode.exe 
SlistNode.o:SlistNode.c
	gcc -c SlistNode.c -g -o SlistNode.o
test.o:test.c
	gcc -c test.c -g -o test.o

.PHONY:clean
clean:
	rm -fv *.o SlistNode.exe
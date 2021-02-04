sequence_list.exe:sequence_list.o test.o
	gcc sequence_list.o test.o -o sequence_list.exe 
sequence_list.o:sequence_list.c
	gcc -c sequence_list.c -o sequence_list.o
test.o:test.c
	gcc -c test.c -o test.o

.PHONY:clean
clean:
	rm -fv *.o sequence_list.exe

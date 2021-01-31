compile_order=gcc 
finall_exe=bar.exe
source_list=main.o bar.o

$(finall_exe):$(source_list)
	$(compile_order) -o $@ $^
%.o:%.c
	$(compile_order) -c $<

.PHONY:clean
clean:
	rm -f $(source_list) $(finall_exe)

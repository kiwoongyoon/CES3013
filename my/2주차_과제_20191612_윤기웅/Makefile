tar=task.exe
cf =-W -g 
c = gcc 
objects =main.o cnt_nums.o print_cnts.o 
$(tar): $(objects)
	$(CC) -o $(tar) $(objects) 
%.o : %.c 
	$(CC) $(cf) -c -o $@ $< 
.PHONY: clean 
clean:
	rm $(tar) $(objects) 
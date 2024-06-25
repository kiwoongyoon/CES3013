Tar=animal.exe
# 컴파일러flag
cf = -W -g
# compiler=> gcc 
C=gcc 
# objects to make
objects = main.o turtle.o dog.o blackcow.o  
$(Tar): $(objects)
	$(CC) -o $(Tar) $(objects)
%.o : %.c
	$(CC) $(cf) -c -o $@ $<
.PHONY: clean
clean:
	rm $(Tar) $(objects)

obj = main.o  rangearray.o array.o
SRC = main.cpp rangearray.cpp array.cpp
CPPFLAGS = -g -c
CC = g++
tar = main
$(tar): $(obj) Array.h RangeArray.h
	$(CC) -o $(tar) $(obj)
clean: 
	rm $(obj) $(tar)
	

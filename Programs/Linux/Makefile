# Makefile to all the design pattern programs
CXXFLAGS = -Wall -g -c 
SRC = source
INC = include

all : Program01 Program02 Process

Program01 : Program01.o
Program02 : Program02.o
Process : Process.o 

Program01.o : $(SRC)/Program01.c include/Program01.h
	$(CC) $(CXXFLAGS) $(SRC)/Program01.c

Program02.o : $(SRC)/Program02.c include/Program02.h
	$(CC) $(CXXFLAGS) $(SRC)/Program02.c

Process.o : $(SRC)/Process.c include/Process.h
	$(CC) $(CXXFLAGS) $(SRC)/Process.c 

.PHONY: clean
clean : 
	rm -f $(SRC)/*.o  Program01 Program02 Process

# Makefile for the Car Parking Project
CFLAGS = -Wall -g -c
SRC = ../src
INC = ../inc
CC = cc -pthread

all : Main EntrySystem ExitSystem

Main : Main.o
EntrySystem : EntrySystem.o
ExitSystem : ExitSystem.o

Main.o : $(SRC)/Main.c $(INC)/Main.h
	$(CC) $(CFLAGS) $(SRC)/Main.c
  
EntrySystem.o : $(SRC)/EntrySystem.c $(INC)/EntrySystem.h
	$(CC) $(CFLAGS) $(SRC)/EntrySystem.c
  
ExitSystem.o : $(SRC)/ExitSystem.c $(INC)/ExitSystem.h
	$(CC) $(CFLAGS) $(SRC)/ExitSystem.c
  
.PHONY: clean
clean :
	rm -f *.o Main EntrySystem ExitSystem

# Makefile to all the design pattern programs

CXXFLAGS = -Wall -g -c 
SRC = ../src
INC = ../inc
CXX = g++
CC = $(CXX)

all : LinkedList CircularLinkedList Queue DoublyLinkedList Stack BinaryTree BinarySearchTree Heap Hashing \
      Graph HelloWorld
LinkedList : LinkedList.o 
CircularLinkedList : CircularLinkedList.o
Queue : Queue.o
DoublyLinkedList : DoublyLinkedList.o
Stack : Stack.o
BinaryTree : BinaryTree.o
BinarySearchTree : BinarySearchTree.o
Heap : Heap.o
Hashing : Hashing.o
Graph : Graph.o
HelloWorld : HelloWorld.o 

LinkedList.o : $(SRC)/LinkedList.cpp $(INC)/LinkedList.h
	$(CC) $(CXXFLAGS) $(SRC)/LinkedList.cpp 

CircularLinkedList.o : $(SRC)/CircularLinkedList.cpp $(INC)/CircularLinkedList.h
	$(CC) $(CXXFLAGS) $(SRC)/CircularLinkedList.cpp

Queue.o : $(SRC)/Queue.cpp $(INC)/Queue.h
	$(CC) $(CXXFLAGS) $(SRC)/Queue.cpp

DoublyLinkedList.o : $(SRC)/DoublyLinkedList.cpp $(INC)/DoublyLinkedList.h
	$(CC) $(CXXFLAGS) $(SRC)/DoublyLinkedList.cpp

Stack.o : $(SRC)/Stack.cpp $(INC)/Stack.h
	$(CC) $(CXXFLAGS) $(SRC)/Stack.cpp

BinaryTree.o : $(SRC)/BinaryTree.cpp $(INC)/BinaryTree.h
	$(CC) $(CXXFLAGS) $(SRC)/BinaryTree.cpp

BinarySearchTree.o : $(SRC)/BinarySearchTree.cpp $(INC)/BinarySearchTree.h
	$(CC) $(CXXFLAGS) $(SRC)/BinarySearchTree.cpp

Heap.o : $(SRC)/Heap.cpp $(INC)/Heap.h
	$(CC) $(CXXFLAGS) $(SRC)/Heap.cpp

Hashing.o : $(SRC)/Hashing.cpp $(INC)/Hashing.h
	$(CC) $(CXXFLAGS) $(SRC)/Hashing.cpp

Graph.o : $(SRC)/Graph.cpp $(INC)/Graph.h
	$(CC) $(CXXFLAGS) $(SRC)/Graph.cpp

HelloWorld.o : $(SRC)/HelloWorld.cpp
	$(CC) $(CXXFLAGS) $(SRC)/HelloWorld.cpp

.PHONY: clean
clean : 
	rm -f *.o  HelloWorld Graph Hashing Heap BinarySearchTree BinaryTree Stack DoublyLinkedList Queue CircularLinkedList LinkedList

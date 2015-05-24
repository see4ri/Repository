# Makefile to compile the design pattern
SRC = ../src
INC = ../inc
CXXFLAGS = -Wall -g -c 
CXX = g++
CC = $(CXX)

all : AbstractFactory Adapter Bridge Builder ChainofResponsibility Command Composite Decorator Facade FactoryWeight FlyWeight Interpreter Iterator Mediator Memento Observer Prototype Proxy Singleton State Strategy TemplateMethod Visitor

AbstractFactory : AbstractFactory.o

AbstractFactory.o : $(SRC)/AbstractFactory.cpp $(INC)/AbstractFactory.h 
	$(CXX) $(CXXFLAGS) $(SRC)/AbstractFactory.cpp

Adapter : Adapter.o 

Adapter.o : $(SRC)/Adapter.cpp $(INC)/Adapter.h 
	$(CXX) $(CXXFLAGS) $(SRC)/Adapter.cpp

Bridge : Bridge.o 

Bridge.o : $(SRC)/Bridge.cpp $(INC)/Bridge.h 
	$(CXX) $(CXXFLAGS) $(SRC)/Bridge.cpp

Builder : Builder.o 

Builder.o : $(SRC)/Builder.cpp $(INC)/Builder.h
	$(CXX) $(CXXFLAGS) $(SRC)/Builder.cpp

ChainofResponsibility : ChainofResponsibility.o 

ChainofResponsibility.o : $(SRC)/ChainofResponsibility.cpp $(INC)/ChainofResponsibility.h 
	$(CXX) $(CXXFLAGS) $(SRC)/ChainofResponsibility.cpp

Command : Command.o
Command.o : $(SRC)/Command.cpp $(INC)/Command.h
	$(CXX) $(CXXFLAGS) $(SRC)/Command.cpp

Composite : Composite.o
Composite.o : $(SRC)/Composite.cpp $(INC)/Composite.h
	$(CXX) $(CXXFLAGS) $(SRC)/Composite.cpp

Decorator : Decorator.o
Decorator.o : $(SRC)/Decorator.cpp $(INC)/Decorator.h
	$(CXX) $(CXXFLAGS) $(SRC)/Decorator.cpp

Facade : Facade.o 
Facade.o : $(SRC)/Facade.cpp $(INC)/Facade.h
	$(CXX) $(CXXFLAGS) $(SRC)/Facade.cpp

FactoryWeight : FactoryWeight.o
FactoryWeight.o : $(SRC)/FactoryWeight.cpp $(INC)/FactoryWeight.h
	$(CXX) $(CXXFLAGS) $(SRC)/FactoryWeight.cpp

FlyWeight : FlyWeight.o
FlyWeight.o : $(SRC)/FlyWeight.cpp $(INC)/FlyWeight.h
	$(CXX) $(CXXFLAGS) $(SRC)/FlyWeight.cpp

Interpreter : Interpreter.o
Interpreter.o : $(SRC)/Interpreter.cpp $(INC)/Interpreter.h
	$(CXX) $(CXXFLAGS) $(SRC)/Interpreter.cpp

Iterator : Iterator.o
Iterator.o : $(SRC)/Iterator.cpp $(INC)/Iterator.h
	$(CXX) $(CXXFLAGS) $(SRC)/Iterator.cpp

Mediator : Mediator.o
Mediator.o : $(SRC)/Mediator.cpp $(INC)/Mediator.h
	$(CXX) $(CXXFLAGS) $(SRC)/Mediator.cpp

Memento : Memento.o
Memento.o : $(SRC)/Memento.cpp $(INC)/Memento.h
	$(CXX) $(CXXFLAGS) $(SRC)/Memento.cpp

Observer : Observer.o 
Observer.o : $(SRC)/Observer.cpp $(INC)/Observer.h
	$(CXX) $(CXXFLAGS) $(SRC)/Observer.cpp

Prototype : Prototype.o
Prototype.o : $(SRC)/Prototype.cpp $(INC)/Prototype.h
	$(CXX) $(CXXFLAGS) $(SRC)/Prototype.cpp

Proxy : Proxy.o 
Proxy.o : $(SRC)/Proxy.cpp $(INC)/Proxy.h
	$(CXX) $(CXXFLAGS) $(SRC)/Proxy.cpp

Singleton : Singleton.o
Singleton.o : $(SRC)/Singleton.cpp $(INC)/Singleton.h
	$(CXX) $(CXXFLAGS) $(SRC)/Singleton.cpp

State : State.o
State.o : $(SRC)/State.cpp $(INC)/State.h
	$(CXX) $(CXXFLAGS) $(SRC)/State.cpp

Strategy : Strategy.o
Strategy.o : $(SRC)/Strategy.cpp $(INC)/Strategy.h
	$(CXX) $(CXXFLAGS) $(SRC)/Strategy.cpp

TemplateMethod : TemplateMethod.o
TemplateMethod.o : $(SRC)/TemplateMethod.cpp $(INC)/TemplateMethod.h
	$(CXX) $(CXXFLAGS) $(SRC)/TemplateMethod.cpp

Visitor : Visitor.o
Visitor.o : $(SRC)/Visitor.cpp $(INC)/Visitor.h
	$(CXX) $(CXXFLAGS) $(SRC)/Visitor.cpp

.PHONY : clean

clean : 
	rm -f AbstractFactory Adapter Bridge Builder ChainofResponsibility Command Composite Decorator Facade FactoryWeight FlyWeight Interpreter Iterator Mediator Memento Observer Prototype Proxy Singleton State Strategy TemplateMethod Visitor *.o

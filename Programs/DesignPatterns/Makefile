# Makefile to all the design pattern programs

#CC      := cc		# The C compiler.
#CFLAGS  := -g		# C compilation options which relate 
			# optimization or debugging (usually
			# just -g or -O).  Usually this wouldn't
			# include -I options to specify the
			# include directories, because then you
			# couldn't override it on the command line
			# easily as in the above example.
#CXX     := c++          # The C++ compiler.  (Sometimes "CPP" instead
        		# of CXX.)
#CXXFLAGS := -g		# C++ compilation options related to 
        		# optimization or debugging (-O or -g).

# source and include files
#SRC = source
#INC = include



# remove all the temporary generated files
#.PHONY: clean
#clean : 
#	rm $(SRC)/*.o  




#########################################################
#
# 'make depend' uses makedepend to automatically generate dependencies 
#               (dependencies are added to end of Makefile)
# 'make'        build executable file 'mycc'
# 'make clean'  removes all .o and executable files
#

# define the C compiler to use
CC = gcc

# define any compile-time flags
CFLAGS = -Wall -g

# define any directories containing header files other than /usr/include
#
#INCLUDES = -I/home/newhall/include  -I../include
INCLUDES = -I./include

# define library paths in addition to /usr/lib
#   if I wanted to include libraries not in /usr/lib I'd specify
#   their path using -Lpath, something like:
#LFLAGS = -L/home/newhall/lib  -L../lib
LFLAGS = -L./lib

# define any libraries to link into executable:
#   if I want to link in libraries (libx.so or libx.a) I use the -llibname 
#   option, something like (this will link in libmylib.so and libm.so:
#LIBS = -lmylib -lm

# define the CPP source files
SRCDIR = source
SRCS = $(SRCDIR)/AbstractFactory.cpp $(SRCDIR)/Adapter.cpp 

# define the CPP object files 
#
# This uses Suffix Replacement within a macro:
#   $(name:string1=string2)
#         For each word in 'name' replace 'string1' with 'string2'
# Below we are replacing the suffix .c of all words in the macro SRCS
# with the .o suffix
#
OBJS = $(SRCS:.cpp=.o)

# define the executable file 
MAIN = DesignPattern

#
# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
#

.PHONY: depend clean

all:    $(MAIN)

$(MAIN): $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

# this is a suffix replacement rule for building .o's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# (see the gnu make manual section about automatic variables)
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) $(SRCDIR)/*.o $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it

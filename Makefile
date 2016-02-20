#Version: 02/20/16
all: interface

interface:
	g++ --std=c++11 -ggdb interface.cpp -o interface

clean:
	rm -f ./interface

CC = g++ -std=c++11 -Wall -Wextra -I.

all: constTest.x fstack_char.x fstack_int.x fstack_string.x

constTest.x: tstack.h constTest.cpp
	$(CC) -o constTest.x constTest.cpp

fstack_char.x: tstack.h fstack_char.cpp
	$(CC) -o fstack_char.x fstack_char.cpp

fstack_int.x: tstack.h fstack_int.cpp
	$(CC) -o fstack_int.x fstack_int.cpp

fstack_string.x: tstack.h fstack_string.cpp
	$(CC) -o fstack_string.x fstack_string.cpp

clean:
	rm constTest.x fstack_char.x fstack_int.x fstack_string.x
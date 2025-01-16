CC = g++
CFLAGS = -std=c++11 -Wall

all: test

test: hex_util.cpp test_hex_util.cpp hex_util.h
	$(CC) $(CFLAGS) -o test_hex_util hex_util.cpp test_hex_util.cpp

clean:
	rm -f test_hex_util

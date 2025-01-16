CC = g++
CFLAGS = -std=c++11 -Wall

all: test

test: hex_util.o test_hex_util.o
	$(CC) $(CFLAGS) -o test_hex_util hex_util.o test_hex_util.o

hex_util.o: hex_util.cpp hex_util.h
	$(CC) $(CFLAGS) -c hex_util.cpp

test_hex_util.o: test_hex_util.cpp hex_util.h
	$(CC) $(CFLAGS) -c test_hex_util.cpp

clean:
	rm -f *.o test_hex_util

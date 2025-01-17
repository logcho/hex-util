CC = g++
CFLAGS = -std=c++11 -Wall

# Directory where the test files are located
TEST_DIR = tests


# Build the test executable
test: ./hex_util.cpp $(TEST_DIR)/test_hex_util.cpp ./hex_util.h
	$(CC) $(CFLAGS) -I. -o test_hex_util ./hex_util.cpp $(TEST_DIR)/test_hex_util.cpp
	

# Clean the generated files
clean:
	rm -f test_hex_util

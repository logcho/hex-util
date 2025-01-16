CC = g++
CFLAGS = -std=c++11 -Wall

# Directory where the test files are located
TEST_DIR = tests
SRC_DIR = util

# Build the test executable
test: $(SRC_DIR)/hex_util.cpp $(TEST_DIR)/test_hex_util.cpp $(SRC_DIR)/hex_util.h
	$(CC) $(CFLAGS) -I$(SRC_DIR) -o test_hex_util $(SRC_DIR)/hex_util.cpp $(TEST_DIR)/test_hex_util.cpp
	

# Clean the generated files
clean:
	rm -f test_hex_util

# hex-util

## Overview
This is a simple and compact C++ utility library for encoding and decoding hexadecimal values. The library provides functions to convert between strings, integers, and vectors of various integer sizes and their hexadecimal representations.

## Features
- Convert strings to hexadecimal and vice versa
- Convert integers (int, uint8_t, uint16_t, uint32_t) to hexadecimal and vice versa
- Convert boolean values to hexadecimal and vice versa
- Extract a slice of a hexadecimal string

## Functions

### String and Hex Conversion
- `std::string stringToHex(const std::string& input);`
  - Converts a string to its hexadecimal representation.
- `std::string hexToString(const std::string& hexInput);`
  - Converts a hexadecimal string back to its original string format.

### Integer and Hex Conversion
- `std::string intToHex(int number);`
  - Converts an integer to a hexadecimal string.
- `int hexToInt(const std::string& hexInput);`
  - Converts a hexadecimal string to an integer.

### Boolean and Hex Conversion
- `std::string boolToHex(bool value);`
  - Converts a boolean value to hexadecimal (`0x01` for true, `0x00` for false).
- `bool hexToBool(const std::string& hexInput);`
  - Converts a hexadecimal string back to a boolean.

### Vector and Hex Conversion
- `std::string vectorToHexUint8(const std::vector<uint8_t>& bytes);`
  - Converts a vector of 8-bit unsigned integers to a hexadecimal string.
- `std::vector<uint8_t> hexToVectorUint8(const std::string& hexInput);`
  - Converts a hexadecimal string to a vector of 8-bit unsigned integers.
- `std::string vectorToHexUint16(const std::vector<uint16_t>& values);`
  - Converts a vector of 16-bit unsigned integers to a hexadecimal string.
- `std::vector<uint16_t> hexToVectorUint16(const std::string& hexInput);`
  - Converts a hexadecimal string to a vector of 16-bit unsigned integers.
- `std::string vectorToHexUint32(const std::vector<uint32_t>& values);`
  - Converts a vector of 32-bit unsigned integers to a hexadecimal string.
- `std::vector<uint32_t> hexToVectorUint32(const std::string& hexInput);`
  - Converts a hexadecimal string to a vector of 32-bit unsigned integers.

### Hexadecimal Slicing
- `std::string slice(const std::string& hexInput, size_t start, size_t end);`
  - Extracts a slice of a hexadecimal string, ensuring the `0x` prefix is retained.

## Usage
### Compilation
To use this utility, simply include the `util.h` file in your project and compile with your C++ code.

```cpp
#include "util.h"
#include <iostream>

int main() {
    std::string hexValue = stringToHex("Hello");
    std::cout << "Hex: " << hexValue << std::endl;
    std::cout << "String: " << hexToString(hexValue) << std::endl;
    return 0;
}
```

### Compilation Example
```sh
g++ -o hex_util_example example.cpp
```

## License
This project is open-source and free to use.

## Contributing
Contributions and improvements are welcome! Feel free to submit a pull request.

## Contact
For any questions or issues, open an issue on the repository or contact the maintainer.


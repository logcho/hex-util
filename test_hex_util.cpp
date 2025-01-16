// test hex_util.cpp 

#include "hex_util.h"
#include <iostream>

void testStringToHex(){
    std::string input = "Hello";
    std::string hex = stringToHex("Hello");
    std::cout << "stringToHex(\"" << input << "\") = " << hex << std::endl;
}

void testHexToString() {
    std::string hex = "0x48656c6c6f";
    std::string str = hexToString(hex);
    std::cout << "hexToString(\"" << hex << "\") = " << str << std::endl;
}

void testIntToHex() {
    int number = 255;
    std::string hex = intToHex(number);
    std::cout << "intToHex(" << number << ") = " << hex << std::endl;
}

void testHexToInt() {
    std::string hex = "0xFF";
    int number = hexToInt(hex);
    std::cout << "hexToInt(\"" << hex << "\") = " << number << std::endl;
}

void testVectorToHexUint8() {
    std::vector<uint8_t> values = {0x12, 0x34, 0x56, 0x78};
    std::string hex = vectorToHexUint8(values);
    std::cout << "vectorToHexUint8({0x12, 0x34, 0x56, 0x78}) = " << hex << std::endl;
}

void testHexToVectorUint8() {
    std::string hex = "0x12345678";
    std::vector<uint8_t> values = hexToVectorUint8(hex);
    std::cout << "hexToVectorUint8(\"" << hex << "\") = {";
    for (uint8_t v : values) std::cout << " 0x" << std::hex << (int)v;
    std::cout << " }\n";
}


int main(){
    std::cout << "Running Tests...\n";
    testStringToHex();
    testHexToString();
    testIntToHex();
    testHexToInt();
    testVectorToHexUint8();
    testHexToVectorUint8();
    std::cout << "All tests completed.\n";

    return 0;
}
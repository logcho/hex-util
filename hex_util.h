// hex_util.h 
#ifndef HEX_UTIL_H
#define HEX_UTIL_H

#include <string>
#include <vector>

std::string stringToHex(const std::string& input);

std::string hexToString(const std::string& hexInput);

std::string intToHex(int number);

int hexToInt(const std::string& hexInput);

std::string vectorToHexUint8(const std::vector<uint8_t>& bytes);

std::vector<uint8_t> hexToVectorUint8(const std::string& hexInput);

std::string vectorToHexUint16(const std::vector<uint16_t>& values);

std::vector<uint16_t> hexToVectorUint16(const std::string& hexInput);

std::string vectorToHexUint32(const std::vector<uint32_t>& values);

std::vector<uint32_t> hexToVectorUint32(const std::string& hexToInt);


#endif // HEX_UTIL_H
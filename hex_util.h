// hex_util.h 
#ifndef HEX_UTIL_H
#define HEX_UTIL_H

#include <string>
#include <vector>

/**
 * @brief Converts a string to a hex representation with a "0x" prefix.
 * 
 * @param input The input string.
 * @return std::string Hex-encoded string.
 */
std::string stringToHex(const std::string& input);

/**
 * @brief Converts a hex string (with "0x" prefix) back to a regular string.
 * 
 * @param hexInput The hex-encoded string.
 * @return std::string Decoded string.
 * @throws std::invalid_argument If the hex string is not properly formatted.
 */
std::string hexToString(const std::string& hexInput);

/**
 * @brief Converts an integer to a hex string with a "0x" prefix.
 * 
 * @param number The integer to convert.
 * @return std::string Hex representation of the integer.
 */
std::string intToHex(int number);

/**
 * @brief Converts a hex string (with "0x" prefix) to an integer.
 * 
 * @param hexInput The hex-encoded integer string.
 * @return int The integer value.
 * @throws std::invalid_argument If the hex string is not properly formatted.
 */
int hexToInt(const std::string& hexInput);

/**
 * @brief Converts a vector of uint8_t values to a hex string with a "0x" prefix.
 * 
 * @param bytes The vector of uint8_t values.
 * @return std::string Hex-encoded string.
 */
std::string vectorToHexUint8(const std::vector<uint8_t>& bytes);

/**
 * @brief Converts a hex string (with "0x" prefix) back to a vector of uint8_t values.
 * 
 * @param hexInput The hex-encoded string.
 * @return std::vector<uint8_t> Decoded vector of uint8_t values.
 * @throws std::invalid_argument If the hex string is not properly formatted.
 */
std::vector<uint8_t> hexToVectorUint8(const std::string& hexInput);

/**
 * @brief Converts a vector of uint16_t values to a hex string with a "0x" prefix.
 * 
 * @param values The vector of uint16_t values.
 * @return std::string Hex-encoded string.
 */
std::string vectorToHexUint16(const std::vector<uint16_t>& values);

/**
 * @brief Converts a hex string (with "0x" prefix) back to a vector of uint16_t values.
 * 
 * @param hexInput The hex-encoded string.
 * @return std::vector<uint16_t> Decoded vector of uint16_t values.
 * @throws std::invalid_argument If the hex string is not properly formatted.
 */
std::vector<uint16_t> hexToVectorUint16(const std::string& hexInput);

/**
 * @brief Converts a vector of uint32_t values to a hex string with a "0x" prefix.
 * 
 * @param values The vector of uint32_t values.
 * @return std::string Hex-encoded string.
 */
std::string vectorToHexUint32(const std::vector<uint32_t>& values);

/**
 * @brief Converts a hex string (with "0x" prefix) back to a vector of uint32_t values.
 * 
 * @param hexInput The hex-encoded string.
 * @return std::vector<uint32_t> Decoded vector of uint32_t values.
 * @throws std::invalid_argument If the hex string is not properly formatted.
 */
std::vector<uint32_t> hexToVectorUint32(const std::string& hexInput);

#endif // HEX_UTIL_H

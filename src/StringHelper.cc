// StringHelper.cc
#include "StringHelper.h"
#include <algorithm>
#include <cctype>

namespace Utils {
namespace String {

std::string StringHelper::toUpperCase(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(),
                   [](unsigned char c){ return std::toupper(c); });
    return result;
}

std::string StringHelper::toLowerCase(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return result;
}

bool StringHelper::contains(const std::string& text, const std::string& pattern) {
    return text.find(pattern) != std::string::npos;
}

} // namespace String
} // namespace Utils


// StringHelper.h
#ifndef STRING_HELPER_H
#define STRING_HELPER_H

#include <string>

namespace Utils {
namespace String {

class StringHelper {
public:
    static std::string toUpperCase(const std::string& str);
    static std::string toLowerCase(const std::string& str);
    static bool contains(const std::string& text, const std::string& pattern);
};

} // namespace String
} // namespace Utils

#endif // STRING_HELPER_H


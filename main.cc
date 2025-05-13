// main.cc
#include "StringHelper.h"
#include <iostream>

int main() {
    std::string input = "I love KiWi !!!33";
    std::cout << "Original: " << input << std::endl;
    std::cout << "Upper: " << Utils::String::StringHelper::toUpperCase(input) << std::endl;
    std::cout << "Lower: " << Utils::String::StringHelper::toLowerCase(input) << std::endl;
    std::cout << "Contains 'Kiwi'? " << (Utils::String::StringHelper::contains(input, "Kiwi") ? "Yes" : "No") << std::endl;
    return 0;
}


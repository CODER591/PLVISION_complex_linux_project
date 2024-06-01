#include <string>
#include <iostream>
#include "upper_lower/lower.h"
#include "upper_lower/upper.h"

int main() {
    std::string str = "Kek";
    std::cout << ToLower(str) << std::endl;
    std::cout << ToUpper(str) << std::endl;
    return 0;
}
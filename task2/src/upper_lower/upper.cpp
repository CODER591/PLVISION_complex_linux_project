#include "upper.h"
#include <string>

std::string ToUpper(std::string result) {
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}
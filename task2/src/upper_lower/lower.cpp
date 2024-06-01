#include "lower.h"

std::string ToLower(std::string result) {
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
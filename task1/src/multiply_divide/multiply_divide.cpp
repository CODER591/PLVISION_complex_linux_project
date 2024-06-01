#include "multiply_divide.h"

int Multiply(int a, int b) {
    return a * b;
}

int Divide(int a, int b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b;
}

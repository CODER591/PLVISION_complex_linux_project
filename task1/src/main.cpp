#include <iostream>
#include "factorial_sqrt/factorial_sqrt.h"
#include "multiply_divide/multiply_divide.h"
#include "sum_substract/sum_substract.h"

int main() {
    int a = 6, b = 3;

    std::cout << "Factorial of " << a << " is " << factorial(a) << std::endl;
    std::cout << "Square root of " << a << " is " << sqrt(a) << std::endl;
    std::cout << a << " multiplied by " << b << " is " << multiply(a, b) << std::endl;
    std::cout << a << " divided by " << b << " is " << divide(a, b) << std::endl;
    std::cout << a << " plus " << b << " is " << sum(a, b) << std::endl;
    std::cout << a << " minus " << b << " is " << subtract(a, b) << std::endl;

    return 0;
}
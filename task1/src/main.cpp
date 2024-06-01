#include <iostream>
#include "factorial_sqrt/factorial_sqrt.h"
#include "multiply_divide/multiply_divide.h"
#include "sum_substract/sum_substract.h"

int main() {
    int a = 144, b = 10;

    std::cout << "Factorial of " << a << " is " << Factorial(a) << std::endl;
    std::cout << "Square root of " << a << " is " << Sqrt(a) << std::endl;
    std::cout << a << " multiplied by " << b << " is " << Multiply(a, b) << std::endl;
    std::cout << a << " divided by " << b << " is " << Divide(a, b) << std::endl;
    std::cout << a << " plus " << b << " is " << Sum(a, b) << std::endl;
    std::cout << a << " minus " << b << " is " << Subtract(a, b) << std::endl;

    return 0;
}
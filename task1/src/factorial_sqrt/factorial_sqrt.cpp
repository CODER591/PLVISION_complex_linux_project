#include "factorial_sqrt.h"
#include <cmath>

int Factorial(int n) {
    if (n <= 1) return 1;
    else return n * Factorial(n - 1);
}

double Sqrt(double x) {
    return std::sqrt(x);
}

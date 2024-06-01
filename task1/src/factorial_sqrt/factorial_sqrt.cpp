#include "factorial_sqrt.h"
#include <cmath>

int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

double sqrt(double x) {
    return std::sqrt(x);
}

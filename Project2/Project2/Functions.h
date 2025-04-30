#pragma once
#include <iostream>
#include <stdexcept>
#include <cmath>

int num;
//long long fact;

long long factorialRecursive(int n) {
    if (n < 0) {
        throw std::invalid_argument("Факториал определен только для неотрицательных чисел.");
    }
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorialRecursive(n - 1);
    }
}

bool isPrimeIterative(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
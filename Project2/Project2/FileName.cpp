#include <iostream>
#include <stdexcept>
#include <cmath>
#include "Functions.h"

int main() {
    try {
        int num;
        std::cout << "Введите целое неотрицательное число: ";
        std::cin >> num;

        long long fact = factorialRecursive(num);
        std::cout << "Факториал " << num << "! = " << fact << std::endl;

        if (isPrimeIterative(num)) {
            std::cout << num << " - простое число." << std::endl;
        }
        else {
            std::cout << num << " - составное число." << std::endl;
        }

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Неизвестная ошибка: " << e.what() << std::endl;
    }

    return 0;
}
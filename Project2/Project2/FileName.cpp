#include <iostream>
#include <stdexcept>
#include <cmath>
#include "Functions.h"

int main() {
    try {
        int num;
        std::cout << "������� ����� ��������������� �����: ";
        std::cin >> num;

        long long fact = factorialRecursive(num);
        std::cout << "��������� " << num << "! = " << fact << std::endl;

        if (isPrimeIterative(num)) {
            std::cout << num << " - ������� �����." << std::endl;
        }
        else {
            std::cout << num << " - ��������� �����." << std::endl;
        }

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "������: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "����������� ������: " << e.what() << std::endl;
    }

    return 0;
}
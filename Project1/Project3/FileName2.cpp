#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

/// <summary>
/// ������� ��������� ��������� ����� � �������� ���������.
/// </summary>
/// <param>
/// ������� � �������� ���������.
/// </param>
/// <returns>
/// ���������� ��������������� ��������.
/// </returns>

int generateRandomNumber(int min, int max) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}

/// <summary>
/// ������� �������� ������� ��������� �����.
/// </summary>
/// <param>
/// ������, ������� � �������� �������.
/// </param>
/// <returns>
/// ���������� ������.
/// </returns>
std::vector<int> createRandomVector(int size, int min, int max) {
    std::vector<int> vec(size);
    for (int i = 0; i < size; ++i) {
        vec[i] = generateRandomNumber(min, max);
    }
    return vec;
}

/// <summary>
/// ������� ������ ������� �� �����.
/// </summary>
/// <param>
/// ���������� ������.
/// </param>
void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

/// <summary>
/// ������� ������ ������������� �������� � �������.
/// </summary>
/// <param>
/// ���������� ������.
/// </param>
/// <returns>
/// ���������� ������������ ������� �������.
/// </returns>
int findMaxElement(const std::vector<int>& vec) {
    if (vec.empty()) {
        throw std::runtime_error("������ ����, ���������� ����� ��������.");
    }
    return *std::max_element(vec.begin(), vec.end());
}

/// <summary> 
/// ������� ���������� ������� �� �����������.
/// </summary>
void sortVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

int main() {
    setlocale(LC_ALL, "");
    try {
        // ������ ������ ������� � �������� ��������� �����.
        int size = 10;
        int min = 1;
        int max = 100;

        // ������� ������ ��������� �����.
        std::vector<int> numbers = createRandomVector(size, min, max);

        // ������� �������� ������.
        std::cout << "�������� ������: ";
        printVector(numbers);

        // ������� ������������ �������.
        int maxElement = findMaxElement(numbers);
        std::cout << "������������ �������: " << maxElement << std::endl;

        // ��������� ������.
        sortVector(numbers);

        // ������� ��������������� ������.
        std::cout << "��������������� ������: ";
        printVector(numbers);

    }
    catch (const std::exception& e) {
        std::cerr << "������: " << e.what() << std::endl;
        return 1; // ���������� ��� ������.
    }

    return 0; // ���������� ��� ��������� ����������.
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

/// <summary>
/// Функция генерации случайных чисел в заданном диапазоне.
/// </summary>
/// <param>
/// Минимум и максимум диапазона.
/// </param>
/// <returns>
/// Возвращает сгенерированное значение.
/// </returns>

int generateRandomNumber(int min, int max) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}

/// <summary>
/// Функция создания вектора случайных чисел.
/// </summary>
/// <param>
/// Размер, минимум и максимум вектора.
/// </param>
/// <returns>
/// Возвращает вектор.
/// </returns>
std::vector<int> createRandomVector(int size, int min, int max) {
    std::vector<int> vec(size);
    for (int i = 0; i < size; ++i) {
        vec[i] = generateRandomNumber(min, max);
    }
    return vec;
}

/// <summary>
/// Функция вывода вектора на экран.
/// </summary>
/// <param>
/// Передается вектор.
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
/// Функция поиска максимального элемента в векторе.
/// </summary>
/// <param>
/// Передается вектор.
/// </param>
/// <returns>
/// Возвращает максимальный элемент вектора.
/// </returns>
int findMaxElement(const std::vector<int>& vec) {
    if (vec.empty()) {
        throw std::runtime_error("Вектор пуст, невозможно найти максимум.");
    }
    return *std::max_element(vec.begin(), vec.end());
}

/// <summary> 
/// Функция сортировки вектора по возрастанию.
/// </summary>
void sortVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

int main() {
    setlocale(LC_ALL, "");
    try {
        // Задаем размер вектора и диапазон случайных чисел.
        int size = 10;
        int min = 1;
        int max = 100;

        // Создаем вектор случайных чисел.
        std::vector<int> numbers = createRandomVector(size, min, max);

        // Выводим исходный вектор.
        std::cout << "Исходный вектор: ";
        printVector(numbers);

        // Находим максимальный элемент.
        int maxElement = findMaxElement(numbers);
        std::cout << "Максимальный элемент: " << maxElement << std::endl;

        // Сортируем вектор.
        sortVector(numbers);

        // Выводим отсортированный вектор.
        std::cout << "Отсортированный вектор: ";
        printVector(numbers);

    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1; // Возвращаем код ошибки.
    }

    return 0; // Возвращаем код успешного завершения.
}

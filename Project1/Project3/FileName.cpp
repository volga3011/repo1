int add(int a, int b) {
    return a + b;
}

void printHello() {
    cout << "Привет, мир!" << endl;
}

void displayNum(int n1, float n2) {
    cout << "Число int равно " << n1;
    cout << "Двойное число равно" << n2;
}

long double fact(int N) {
    if (N < 0) {
        return 0;
    }
    else if (N == 0) {
        return 1;
    }
    else {
        return N * fact(N - 1);
    }
}

void check_pass(string password)
{
    string valid_pass = "qwerty123";
    if (password == valid_pass) {
        cout << "Доступ разрешен." << endl;
    }
    else {
        cout << "Неверный пароль!" << endl;
    }
}

#include <iostream>
using namespace std; 
int main()
{
    int result = add(5, 3);
    cout << "5 + 3 = " << result << endl;
    return 0;

    printHello();

    int num1 = 5;
    double num2 = 5.5;
    displayNum(num1, num2);
    return 0;

    fact(5);

    string user_pass;
    cout << "Введите пароль: ";
    getline(cin, user_pass);
    check_pass(user_pass);
    return 0;
}
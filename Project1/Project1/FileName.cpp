
#include <stdio.h>
#include <time.h>
int main() {
	time_t start, end;
	time(&start);
	"Тут код";
	time(&end);
	double seconds = difftime(end, start);
	printf("The time: %f seconds\n", seconds);
}

	////int a = 5, b = 6, c = 8;
	//string word;

	//int i = 0;
	//while (i < 5) {
	//	cout << "Hello, World! \n";
	//	i++;
	//}

	//int a, b, c;
	//a = 1;
	//b = 2;
	//c = 0;
	//for (int i = 0; i < 10; i++) {
	//	a++;
	//	b *= 2;
	//	c = a + b;
	//}

	//	try {
	//		int a = 10;
	//		int b = 0;

	//		if (b == 0) {
	//			throw exception("Деление на ноль!");
	//		}

	//		int result = a / b;
	//		cout << "Результат: " << result << endl;

	//	}
	//	catch (const exception& error) {
	//		cerr << "Ошибка : " << error.what() << endl;
	//	}


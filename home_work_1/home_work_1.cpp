
#include <iostream>
#include <string>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string word = "";
	int size(0);
	int bad_length;
	std::cout << "Введите запретную длинну: ";
	std::cin >> bad_length;
	do {
		try {

			std::cout << "Введите слово: ";
			std::cin >> word;
			size = word.length();
			if (size == bad_length) throw "Вы ввели слово запретной длины!До свидания!";
			std::cout << "Длинна слова '" << word << "' равна " << word.length() << std::endl;

		}
		catch (const char* a) {
			std::cerr << a;
		}
	} while (size != bad_length);
}


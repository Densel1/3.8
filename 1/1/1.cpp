

#include <iostream>


class BadLength :public std::exception
{
public:
	const char* what() const override { return "Вы ввели слово запретной длины! До свидания."; }
};

int function(std::string str, int forbidden_length)
{
	int size = str.length();
	if (forbidden_length == size) throw BadLength();
	return forbidden_length;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::string myWord;
	int size;
	std::cout << "Введите запретную длину: ";
	std::cin >> size;


	do {
		std::cout << "Введите слово: ";
		std::cin >> myWord;
		try
		{
			std::cout << "Длина слова \"" << myWord << "\" равна " << function(myWord, size) << std::endl;
		}
		catch (const BadLength& ex) { std::cout << ex.what() << std::endl; break; }
		catch (...) { std::cout << "Неизвестная ошибка" << std::endl; break; }
	} while (true);
		return 0;
}


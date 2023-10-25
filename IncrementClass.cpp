#include <iostream>
#include <windows.h>

class Counter {

private:
	int number;

public:

	Counter(int number) {
		this->number = number;
	}

	int inc() {
		return ++number;
	}

	int dec() {
		return --number;
	}

	int cur() {
		return number;
	}
};

int main() {
	std::string input;
	int start = 0;
	bool input_control;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> input;



	if (input == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		input_control = false;
	}
	else {
		input_control = true;
	}

	while (input_control == false) {

		std::cin >> start;
		if (std::cin.fail()) {
			std::cout << "Неверный вводы, повторите" << std::endl;
			std::cin.clear();
		}
		else {
			std::cin.clear();
			input_control = true;
		}

	}
	Counter count(start);
	while (input != "x") {
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
		std::cin >> input;
		if (input == "+") {
			std::cout << count.inc() << std::endl;
		} else if (input == "-") {
			std::cout << count.dec() << std::endl;
		} else if (input == "=") {
			std::cout << count.cur() << std::endl;
		} else {
			continue;
		}
	}
	std::cout << "До свидания!";
}
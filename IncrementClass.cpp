#include <iostream>
#include <windows.h>

class Counter {

private:
	int number;

public:

	Counter() {
		number = 0;
	}

	int set(int number) {
		this->number = number;
		return number;
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
	int start;
	bool input_control;
	Counter count;

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
			count.set(start);
			std::cin.clear();
			input_control = true;
		}

	}

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
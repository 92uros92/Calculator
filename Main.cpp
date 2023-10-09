#include <iostream>
#include "Header.h"

int main()
{
	double x, y; 
	int sign;
	std::cout << "Insert the number: " << "\n";
	std::cout << "(1) for addition." << "\n";
	std::cout << "(2) for subtraction." << "\n";
	std::cout << "(3) for multiplying." << "\n";
	std::cout << "(4) for dividing." << "\n";
	std::cout << "(5) for power of a given numbers." << "\n";
	std::cout << "(6) for square number." << "\n";
	std::cout << "(7) for squaring the number." << "\n";
	std::cout << "Number: " << "\n";
	std::cin >> sign;

	switch (sign)
	{
		double x, y;
	case 1:
		number_input(x, y);
		std::cout << "\n" << "Result: " << addition(x, y) << "\n";

		break;
	case 2:
		number_input(x, y);
		std::cout << "\n" << "Result: " << subtraction(x, y) << "\n";

		break;
	case 3:
		number_input(x, y);
		std::cout << "\n" << "Result: " << multiplying(x, y) << "\n";

		break;
	case 4:
		number_input(x, y);
		std::cout << "\n" << "Result: " << dividing(x, y) << "\n";

		break;
	case 5:
		number_input(x, y);
		std::cout << "\n" << "Result: " << power_numbers(x, y) << "\n";

		break;
	case 6:
		std::cout << "Please insert number: " << "\n";
		std::cin >> x;
		std::cout << "\n" << "Result: " << square_root(x) << "\n";

		break;
	case 7:
		std::cout << "Please insert number: " << "\n";
		std::cin >> x;
		std::cout << "\n" << "Result: " << squaring(x) << "\n";

		break;
	default:
		std::cout << "Invalid number";
		break;
	}
	return 0;
}
#include <iostream>
#include "Header.h"

int main()
{
	double x, y, sign;
	std::cout << "Please insert two numbers: " << "\n";
	std::cout << "First number: ";
	std::cin >> x;
	std::cout << "Second number: ";
	std::cin >> y;
	std::cout << "Insert the number: " << "\n";
	std::cout << "(1) for addition." << "\n";
	std::cout << "(2) for subtraction." << "\n";
	std::cout << "(3) for multiplying." << "\n";
	std::cout << "(4) for dividing." << "\n";
	std::cout << "(5) for power of a given number." << "\n";
	std::cout << "Number: " << "\n";
	std::cin >> sign;

	if (sign == 1)
	{
		std::cout << "\n" << "Result: " << addition(x, y) << "\n";
	}
	else if (sign == 2)
	{
		std::cout << "\n" << "Result: " << subtraction(x, y) << "\n";
	}
	else if (sign == 3)
	{
		std::cout << "\n" << "Result: " << multiplying(x, y) << "\n";
	}
	else if (sign == 4)
	{
		std::cout << "\n" << "Result: " << dividing(x, y) << "\n";
	}
	else if (sign == 5)
	{
		std::cout << "\n" << "Result: " << power_numbers(x, y) << "\n";
	}
	else
		std::cout << "Invalid number";
}
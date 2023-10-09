#include <iostream>
#include <math.h>
#include "Header.h"

void number_input(double &a, double &b)
{
	std::cout << "Please insert two numbers: " << "\n";
	std::cout << "First number: ";
	std::cin >> a;
	std::cout << "Second number: ";
	std::cin >> b;

}

double addition(double a, double b)
{
	return a + b;
}

double subtraction(double a, double b)
{
	return a - b;
}

double multiplying(double a, double b)
{
	return a * b;
}

double dividing(double a, double b)
{
	return a / b;
}

double power_numbers(double a, double b)
{
	return pow(a, b);
}

double square_root(double a)
{
	return sqrt(a);
}

double squaring(double a)
{
	return a * a;
}
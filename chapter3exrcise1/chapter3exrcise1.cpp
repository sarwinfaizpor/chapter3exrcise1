#include <iostream>

int main()
{
	double gallons;
	double miles;
	double miles_per_gallon;

	std::cout << "Enter the gallons of gas can hold: ";
	std::cin >> gallons;
	std::cout << "Enter the miles the car can travel on a full tank: ";
	std::cin >> miles;

	miles_per_gallon = miles / gallons;

	std::cout << "Miles per gallon : " << miles_per_gallon;
	return 0;
}

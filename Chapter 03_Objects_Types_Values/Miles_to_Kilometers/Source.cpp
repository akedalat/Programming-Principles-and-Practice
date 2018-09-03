#include<string>
#include<iostream>

int main() {


	double number_of_miles{ 0 };
	std::cout << "Please enter a number of miles to be converted to kilometers\n";

	while (std::cin >> number_of_miles) {

		std::cout << number_of_miles << " miles is " << number_of_miles * 1.609 << " kilometers\n";
	}
	return 0;
}
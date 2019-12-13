#include<string>
#include<iostream>

int main() {
	double number_of_miles = 0;
	double miles_in_km = 1.690;
	std::cout << "Please enter a number of miles to be converted to kilometers\n";

	while (std::cin >> number_of_miles) {

		std::cout << number_of_miles << " miles is " << number_of_miles * miles_in_km << " kilometers\n";
	}
	return 0;
}

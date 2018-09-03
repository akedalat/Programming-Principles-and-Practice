#include<iostream>
#include<string>


// Comparing two numbers - Haven't calculate ratio of numbers yet
int main() {
	double val1{ 0.0 }, val2{ 0.0 }; //comparing only two numbers



	std::cout << "Please enter two floating point numbers\n"; //prompt

	while (std::cin >> val1 >> val2) {

		if (std::cin.fail) {
			std::cout << "Invalid data type\n";
		}
		std::cout << "Numberes entered are: " << val1 << " and " << val2 << std::endl; 

		if (val1 > val2) {

			std::cout << "Smallest number is: " << val2 << std::endl;
		}

		if (val1 < val2) {

			std::cout << "Smallest number is: " << val1 << std::endl;
		}

		if (val1 == val2) {

			std::cout << "Numbers are equal!\n";


		}
		std::cout << "Sum is: " << val1 + val2 << std::endl
			<< "Difference is: " << val1 - val2 << std::endl
			<< "Product is: " << val1 * val2 << std::endl;


		if (val2 == 0) {

			std::cout << "Ratio is: Nice try! I don't divide by 0\n";
		}
		else
			std::cout << "Ratio is: " << val1 / val2 << std::endl;

	}


	return 0;
}
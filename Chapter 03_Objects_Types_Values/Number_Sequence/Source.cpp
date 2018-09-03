#include<string>
#include<iostream>

int main() {

	std::string val1, val2, val3; //initialise variabales 

	std::cout << "Please enter 3 integer values to be suquenced by me\n"; //ask to enter numbers

	while (std::cin >> val1 >> val2 >> val3) {

		std::cout << "Numbres entered are: " << val1 << ", " << val2 << ", " << val3 << std::endl;

		std::string smallest;
		std::string middle;
		std::string largest;

		if (val1 <= val2 && val1 <= val3) {
			smallest = val1;
			if (val2 <= val3) {

				middle = val2;
				largest = val3;
			}
			else {
				middle = val3;
				largest = val2;
			}


		}
		else if (val2 <= val1 && val2 <= val3) {
			smallest = val2;
			if (val1 <= val3) {

				middle = val1;
				largest = val3;
			}
			else {
				middle = val3;
				largest = val1;
			}


		}
		else {
			smallest = val3;
			if (val1 <= val2) {

				middle = val1;
				largest = val2;
			}
			else {
				middle = val2;
				largest = val1;
			}


		}

		std::cout << "Sequence: " << smallest << ", " << middle << ", " << largest << std::endl;
	}


	return 0;
}
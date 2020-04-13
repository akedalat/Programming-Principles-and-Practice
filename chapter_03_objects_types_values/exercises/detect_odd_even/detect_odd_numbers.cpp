#include <iostream>

int main (){

	std::cout<< "Please enter an integer value" << std::endl;

int val {0};

	while (std::cin>> val) {	
		if (val % 2 == 0) {
		std::cout<< "The value " << val << " is an even number" << std::endl;
		}
		else {  
		std::cout<< "The value " << val << " is an odd number" << std::endl;
		}
}
	return 0;
}
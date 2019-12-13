#include <iostream>
#include <string>
#include <float.h>
#include<vector>
#include <algorithm>

int main() {

	double val { 0.0 }, sum { 0.0 }; 
	double smallest = std::numeric_limits<double>::max(); // to read smallest into
	double largest = std::numeric_limits<double>::min(); // to read largest into
	constexpr double cm_per_m = 100; 
	constexpr double cm_per_in = 2.54; 
	constexpr double in_per_ft = 12; 
	std::string unit = " ";
	int count{ 0 };
	std::vector<double>values;

std::cout << "Enter a value followed by a unit (cm, m, in, ft)" << std::endl; //prompt to enter 1 number and a unit
	
	//read input and convert to meter
	while (std::cin>> val >> unit) { 
		++count;

		if (unit == "cm" || unit == " cm" || unit == "centimeter") {
			val = val / cm_per_m;
		}
		else if (unit == "in" || unit == " in" || unit == "inch") {
			val = (val * cm_per_in) / cm_per_m;
		}
		else if (unit == "ft" || unit == " ft" || unit == "feet") {
			val = val / in_per_ft;
			val = (val * cm_per_in) / cm_per_m;
		}
		else if (unit != "m"){
			std::cout << unit << " not recognised" << std::endl;
			return 1;
		}
	
		//define smallest and largest values
		if (val < smallest){ 
			smallest = val;
	}
		else if (val > largest) { 
			largest = val;
	}
	sum += val; //calculate sum
		
	//read val into vector then sort and print

	values.push_back(val); 
	std::sort(values.begin(), values.end());
	
	std::cout << "values entered: ";
	for (int i = 0; i < values.size(); i++) {
		std::cout << values[i] << " ";
	}
		std::cout<< std::endl << smallest <<"m the smallest so far" << std::endl;
		std::cout<< largest <<"m the largest so far" << std::endl;
		std::cout << sum << " sum of values" << std::endl;
		std::cout << count << " number of values entered" << std::endl;
	
	std::cout << std::endl << "Enter a value followed by a unit (cm, m, in, ft)" << std::endl; //prompt to enter 1 number and a unit again
	
	}
	return 0;
 }
	


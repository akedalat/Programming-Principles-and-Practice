
#include <iostream>
#include <string>

int main() {
	std::cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	std::string first_name;              // first_name is a variable of type string
	std::string friend_name;
	char friend_sex{ 0 };
	int age{ 0 };
	std::cin >> first_name;             // read characters into first_name
	std::cout << "Dear " << first_name << ",\n"
		<< "How have you been?\n"
		<< "I miss your childhood! you had very nice days.\n"
		<< "Do you remember your childhood? What was the name of your best childhood friend?";
	std::cin >> friend_name;
	std::cout << "Is " << friend_name << " male or female? (write m/f)\n";
	std::cin >> friend_sex;

	if (friend_sex == 'm') {

		std::cout << "If you see " << friend_name << ", please tell him to call me!\n";
	}
	else if (friend_sex == 'f') {

		std::cout << "If you see " << friend_name << ", please tell her to call me!\n";

	}
	else {
		std::cout << "sex is undefined.\n";
	}

	std::cout << "Enter your age\n";
	std::cin >> age;
	if (age <= 0 || age >100) {
		std::cout<<"you must be kidding!\n";
	}
	else {
		std::cout << "So you are passing " << age << " and soon will be " << age + 1 << '\n' << '\n';
	}
	std::cout << "Yours sincerely,\n" << '\n' << '\n' << "The programmer\n";

	return 0;
}






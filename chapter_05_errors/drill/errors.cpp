#include "../../libraries/std_lib_facilities.h"
using namespace std;

int main() 
try {
// place an error from comments below here. compiler must print "Success!"
int x = 4;
double d = 51.00 / (x + 2.00);
if (d == 2 * x + 0.5)
cout << "Success!\n";
keep_window_open();
return 0; 
}

catch (exception& e) { 
	cerr << "error: " << e.what() << '\n'; 
	keep_window_open(); 
	return 1; }

catch (...) { 
	cerr << "Oops: unknown exception!\n"; 
	keep_window_open(); 
	return 2; 
}

// List of 25 errors and their solutions:

/* 	1. Cout << "Success!\n";
	correction: cout << "Success!\n";
	
	2. cout << "Success!\n; 
	correction: cout << "Success!\n";
	
	3. cout << " Success " << !\n" 
	correction": cout << "Success!" << "\n";
	
	4. cout << success << '\n';
	correction: cout << "Success!" << "\n";
	
	5. string res = 7;
	vector<int> v(10);
	v[5] = res;
	cout << "Success!\n";
	correction: string must be int
	
	6. vector<int> v(10);
	v(5) = 7;
	if (v(5) != 7)
		cout << "Success!\n";
	
	correction: vector<int> v(10);
	v[5] = 7;
	if (v[5] == 7)
		cout << "Success!\n";
	
	7. if (cond) cout << "Success!\n";
	else cout << "Fail!\n";
	correction: if (true) cout << "Success!\n";
	else cout << "Fail!\n";
	
	8. bool c = false;
	if (c)
		cout << "Success!\n";
	else
		cout << "Fail!\n";
	correction : c must be true
	
	9. string s = "ape";
	boo c = "fool" < s;
	if (c)
		cout << "Success!\n";
	correction: string s = "ape";
	bool c = true;
	if (c)
	cout << "Success!\n";
	
	10. string s = "ape";
	if (s == "fool")
		cout << "Success!\n";
	correction s must be "fool"
	
	11. string s = "ape";
	if (s == "fool")
		cout < "Success!\n";
	correction: << instead of <
	
	12. string s = "ape";
	if (s + "fool")
		cout < "Success!\n";
	correction: string s = "ape";
	if (s == "ape")
	cout << "Success!\n"; 
	
	13. vector<char> v(5);
	for (int i = 0; 0 < v.size(); ++i)
		;
	cout << "Success!\n";
	correction: i < v.size() 
	
	14. vector<char> v(5);
	for (int i = 0; i <= v.size(); ++i)
		;
	cout << "Success!\n";
	correction: ???
	
	15. string s = "Success!\n";
	for (int i = 0; i < 6; ++i)
		cout << s[i];
	correction:  i <= 7
	
	16. if (true) then cout << "Success!\n";
	else cout << "Fail!\n";
	correction: then is extra
	
	17. int x = 2000;
	char c = x;
	if (c == 2000)
		cout << "Success!\n";
	correction: char must be int
	
	18. string s = "Success!\n";
	for (int i = 0; i < 10; ++i)
		cout << s[i];
	correction: 10 could be 8 but still prints with 2 extra line
	
	19. vector v(5);
	for (int i = 0; i <= v.size(); ++i)
		;
	cout << "Success!\n";
	correction: vector type is not known - vector<int>v(5)
	
	20. int i = 0;
	int j = 9;
	while (i < 10)
		++j;
	if (j < i)
		cout << "Success!\n";
	correction: ++i 
	
	21. int x = 2;
	double d = 5 / (x–2);
	if (d == 2 * x + 0.5)
		cout << "Success!\n";
	correction: int x = 2;
	double d = 5 / (x - 1);
	if (d == 2 * (x + 0.5))
	cout << "Success!\n";
	
	22. string<char> s = "Success!\n";
	for (int i = 0; i <= 10; ++i)
		cout << s[i];
	correction: string s = "Success!\n";
	for (int i = 0; i <= 8; ++i)
	cout << s[i];
	
	23. int i = 0;
	while (i < 10)
		++j;
	if (j < i)
		cout << "Success!\n";
	correction: int i = 0;
	int j = 9;
	while (i < 10)
	++i;
	if (j < i)
	cout << "Success!\n";
	
	24. int x = 4;
	double d = 5 / (x–2);
	if (d = 2 * x + 0.5)
		cout << "Success!\n";
	correction: int x = 4;
	double d = 51.00 / (x + 2.00);
	if (d == 2 * x + 0.5)
	cout << "Success!\n";
	
	25. cin << "Success!\n";
	correction cout instead of cin */

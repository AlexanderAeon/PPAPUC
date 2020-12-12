#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first and second name:\n";
	string first;
	string second;
	cin >> first >> second;
	cout << "Please enter your age: \n";
	double age;
	cin >> age;
	cout << "Hello, " << first << " " << second << "\n";
	cout << "Your age in months is " << age * 12 << "\n";
}
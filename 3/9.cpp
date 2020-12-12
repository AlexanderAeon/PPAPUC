#include "std_lib_facilities.h"

int main()
{
	string input;
	cin >> input;
	if (input == "zero") cout << 0 << endl;
	else if (input == "one") cout << 1 << endl;
	else if (input == "two") cout << 2 << endl;
	else if (input == "three") cout << 3 << endl;
	else if (input == "four") cout << 4 << endl;
	else cout << "not a number i know\n";
}
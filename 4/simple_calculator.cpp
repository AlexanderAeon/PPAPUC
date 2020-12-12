#include "../std_lib_facilities.h"

int main()
{
	double arg1, arg2, result;
	char operation;
	cout << "Please, enter two numbers and operation symbol to calculate.\n";
	cin >> arg1 >> arg2 >> operation;

	switch (operation) {
		case '+':
			result = arg1 + arg2;
			cout << "The sum of " << arg1 << " and " << arg2 << " is " << result << '\n';
			break;
		case '-':
			result = arg1 - arg2;
			cout << "The difference of " << arg1 << " and " << arg2 << " is " << result << '\n';
			break;
		case '*':
			result = arg1 * arg2;
			cout << "The product of " << arg1 << " and " << arg2 << " is " << result << '\n';
			break;
		case '/':
			result = arg1 / arg2;
			cout << "The quotient of " << arg1 << " and " << arg2 << " is " << result << '\n';
			break;
		default:
			cout << "Wrong operation.\n";
	}	
}
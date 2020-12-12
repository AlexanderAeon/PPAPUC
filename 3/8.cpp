#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the number to check if it's even or odd\n";
	int num;
	cin >> num;
	if (num%2) {
		cout << "The number " << num << " is odd\n";
	}
	else {
		cout << "The number " << num << " is even\n";
	}
}
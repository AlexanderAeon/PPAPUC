#include "std_lib_facilities.h"

int main()
{
	cout << "Enter two integer values\n";
	double val1, val2;
	cin >> val1 >> val2;


	if (val1 > val2) {
		cout << val2 << " is smaller than " << val1 << endl;
	}
	else if (val1 < val2) {
		cout << val1 << " is smaller than " << val2 << endl;
	}
	else {
		cout << val1 << " equals " << val2 << endl;
	}

	cout << "sum equals " << val1+val2 << endl;
	cout << "difference equals " << abs(val1-val2) << endl;
	cout << "product equals " << val1*val2 << endl;
	cout << "ratio: " << 1.0*val1/val2 << endl;
}
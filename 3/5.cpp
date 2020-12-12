#include "std_lib_facilities.h"

int main()
{
	string a, b, c;
	cin >> a >> b >> c; // 10 4 6


	if (a <=b && a <=c) {
		if (b > c) {
			cout << a << ", " << c << ", " << b << endl;
		}
		else {
			cout << a << ", " << b << ", " << c << endl;
		}
	}
	else if (b <= a && b <= c) {
		if (a > c) {
			cout << b << ", " << c << ", " << a << endl;
		}
		else {
			cout << b << ", " << a << ", " << c << endl;
		}
	}
	else {
		if (b > a) {
			cout << c << ", " << a << ", " << b << endl;
		}
		else {
			cout << c << ", " << b << ", " << a << endl;
		}
	}

}
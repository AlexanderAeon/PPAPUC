#include "../std_lib_facilities.h"

int main()
{
	double a, b, c, d;
	cout << "Input a, b, c\n";
	cin >> a >> b >> c;

	d = b*b - 4*a*c;

	if (d < 0)
		cout << "There is no real solution.\n";
	else 
		cout << "x1 = " << (-b+sqrt(d))/(2*a) << '\n'
			 << "x2 = " << (-b-sqrt(d))/(2*a) << '\n';
}
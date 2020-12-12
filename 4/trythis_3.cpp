#include "std_lib_facilities.h"


double square(double x) {
	double result = 0;
	for (int i = 0; i < x; i++)
		result += x;
	return result;
}

int main()
{
	for (int i = 0; i < 100; i++)
		cout << i << '\t' << square(i) << endl;
}
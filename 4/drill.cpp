#include "../std_lib_facilities.h"

int main()
{
	double a;
	string unit;
	double min = 9999999999, max = -9999999999;
	double diff = 0;
	double sum = 0;
	int number = 0;
	vector<double> v;
	while (cin >> a >> unit && a != '|') {
		if (unit != "m" && unit != "cm" && unit != "in" && unit != "ft")
			cout << "Wrong unit\n";
		else {
			++number;
			cout << a << unit << '\n';
			if (a < min) {
				min = a;
				cout << "The smallest so far\n";
			}
			if (a > max) {
				max = a;
				cout << "The largest so far\n";
			}
			if (unit == "cm")
				a *= 0.01;
			if (unit == "ft")
				a *= 12*2.54*0.01;
			if (unit == "in")
				a *= 2.54*0.01;
			v.push_back(a);
			sum += a;
		}
	}
	cout << "----------\n";
	cout << "the smallest value: " << min << '\n';
	cout << "the largest value: " << max << '\n';
	cout << "the number of values: " << number << '\n';
	cout << "the sum of values: " << sum << "m \n";

	sort (v);
	for (double e : v) cout << e << ' ';
	cout << endl;
}
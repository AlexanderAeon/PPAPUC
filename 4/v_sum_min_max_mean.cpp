#include "std_lib_facilities.h"

int main()
{
	vector<double> dists;

	for (double input; cin >> input;)
		dists.push_back(input);

	double sum = 0, min = dists[0], max = min;
	for (double d : dists) {
		sum += d;
		if (d < min)
			min = d;
		if (d > max)
			max = d;
	}

	cout << "Sum: " << sum << '\n'
		 << "Min: " << min << '\n'
		 << "Max: " << max << '\n'
		 << "Mean: " << sum/dists.size() << '\n';
}
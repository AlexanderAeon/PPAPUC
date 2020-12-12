#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	//compute median value;
	double median;
	sort(temps);
	if (temps.size() == 1) median = temps[0];
	else if (temps.size()%2)
		median = temps[temps.size()/2];
	else
		median = (temps[temps.size()/2]+temps[temps.size()/2-1])/2;

	cout << "Median temperature: " << median << '\n'; 
}
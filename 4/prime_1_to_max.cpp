#include "../std_lib_facilities.h"

bool IsPrime(int n) {
for (int i = 2; i < n; ++i) {
	if (!(n%i))
		return false;
}
return true;
}

int main()
{
	vector<int> prime;
	int max;
	cout << "Input max number: ";
	cin >> max;
	for (int i = 2; i <=max; ++i) {
		if (IsPrime(i))
			prime.push_back(i);
	}

	for (int n : prime)
		cout << n << endl;
}
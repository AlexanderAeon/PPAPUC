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
	for (int i = 2; i <=100; ++i) {
		if (IsPrime(i))
			prime.push_back(i);
	}

	for (int n : prime)
		cout << n << endl;
}
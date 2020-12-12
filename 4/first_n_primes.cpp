#include "../std_lib_facilities.h"

bool IsPrime(int n) {
for (int i = 2; i < n; ++i) {
	if (n % i == 0)
		return false;
}
return true;
}

int main()
{
	vector<int> prime;
	int n;
	cout << "Input n: ";
	cin >> n;
	int i = 2;
	while (prime.size() < n) {
		if (IsPrime(i))
			prime.push_back(i);
		++i;
	}

	for (int num : prime)
		cout << num << endl;
}
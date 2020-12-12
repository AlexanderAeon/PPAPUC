#include "../std_lib_facilities.h"

int main()
{
	vector<string> v = {"zero", "one", "two", "three",
	"four", "five", "six", "seven", "eight", "nine"};

	string digit;

	while (cin >> digit) {
		for (int i = 0; i < v.size(); ++i)
			if (v[i] == digit)
				cout << i << endl;
	}
}
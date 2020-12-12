#include "../std_lib_facilities.h"

int main()
{
	vector<int> v;
	for (int i = 2; i < 101; ++i) v.push_back(i);

for (int p = 2; p < v.size()*v.size(); ++p) {
	for (int i = p*p-2; i < v.size(); ++i) {
		if (v[i] % p == 0) {
			v[i] = -1;
		}
	}
}

for (int e: v)
	if (e != -1) cout << e << endl;
}
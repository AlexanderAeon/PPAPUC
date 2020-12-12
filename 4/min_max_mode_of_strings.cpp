#include "../std_lib_facilities.h"

int main()
{
	vector<string> v = {"a", "aa", "bb", "bb", "c"};

	string min = v[0];
	string max = v[0];

	for (string e : v) {
		if (e > max) max = e;
		if (e < min) min = e;
	}

	string mode, tmp_mode;
	int ctr = 1;
	int tmp_ctr = 1;
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v.size(); ++j) {
			if (v[i] == v[j] && i != j) {
				tmp_mode = v[i];
				++tmp_ctr;
			}
		}
		if (tmp_ctr > ctr) {
			mode = v[i];
			ctr = tmp_ctr;
		}
		tmp_ctr = 1;
	}


	cout << "Min: " << min << '\n'
		 << "Max: " << max << '\n'
		 << "Mode: " << mode << '\n';
}
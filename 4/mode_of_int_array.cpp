#include "../std_lib_facilities.h"

int main()
{
	vector<int> v;

	int input;
	while (cin >> input) {
		v.push_back(input);
	}
//1 2 2 2 3 3
	int mode, tmp_mode;
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

	cout << "Mode = " << mode << endl;
}
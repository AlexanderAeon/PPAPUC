#include "../std_lib_facilities.h"

int main()
{
	vector<string> names;
	vector<int> scores;

	//Vectors initialization
	string n;
	int s;
	while (true) {
		cin >> n >> s;
		if (n == "NoName" && s == 0) break;
		names.push_back(n);
		scores.push_back(s);
	}


	for (int i = 0; i < names.size(); ++i)
		for (int j = 0; j < names.size(); ++j)
			if (names[i] == names[j] && i != j) {
				simple_error("Names are not unique.\n");
			}

	cout << "Enter a score: ";
	cin >> s;
	bool trigger = false;
	for (int i = 0; i < scores.size(); ++i)
		if (s == scores[i]) {
			cout << names[i] << " ";
			trigger = true;
		}
	cout << endl;
	if (!trigger) cout << "no such score\n";
}
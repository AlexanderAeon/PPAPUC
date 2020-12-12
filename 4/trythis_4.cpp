#include "std_lib_facilities.h"

int main()
{
	string input;
	bool is_disliked = false;
	vector<string> disliked_list = {"Broccoli", "chimp", "banana"};
	while (cin >> input) {
		for (string disliked : disliked_list)
			if (input == disliked)
				is_disliked = true;

		if (is_disliked)
			cout << "BLEEP" << '\n';
		else
			cout << input << '\n';

		is_disliked = false;
		}
}
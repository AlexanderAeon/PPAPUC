#include "../std_lib_facilities.h"

int main()
{
	int total_grains = 0;
	int grains = 1;
	int square_amount = 0;
	while (square_amount < 64) {
		total_grains += grains;
		grains *= 2;
		++square_amount;
		cout << total_grains << '\n';
	}
	cout << "Result: " << total_grains << endl;
}
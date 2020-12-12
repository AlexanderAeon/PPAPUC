#include "../std_lib_facilities.h"

int main()
{
	int total_grains = 0;
	int grains = 1;
	int square_amount = 0;
	while (total_grains < 1000000000) {
		total_grains += grains;
		grains *= 2;
		++square_amount;
	}
	cout << "Result: " << square_amount << endl;
}
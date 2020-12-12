#include "std_lib_facilities.h"

int main()
{
	char c;

	for (int i = 0; i < 256; ++i) {
		c = i;
		cout << c << '\t' << i << '\n';
	}
}
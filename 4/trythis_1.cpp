#include "std_lib_facilities.h"

int main()
{
	constexpr double yen_to_d = 1, euro_to_d = 1, pound_to_d = 1;

	double money = 0;
	char currency;
	cout << "Allowed currencies are: yens(y), euros(u) and pounds(p)\n";
	cout << "Please enter the amount of money and currency to convert: ";
	cin >> money >> currency;

	switch (currency) {
	case 'y':
		cout << money << " yens equal " << yen_to_d*money << " dollars.\n";
		break;
	case 'e':
		cout << money << " euros equal " << euro_to_d*money << " dollars.\n";
		break;
	case 'p':
		cout << money << " pounds equal " << pound_to_d*money << " dollars\n";
		break;
	default:
		cout << "No such currency.\n";
	}
}
#include "std_lib_facilities.h"

int main()
{
	int pennies, nickels, dimes, quarters, half_dollars, one_dollar_coins;
	cout << "How many pennies do you have? ";
	cin >> pennies;
	cout << "How many nickels do you have? ";
	cin >> nickels;
	cout << "How many dimes do you have? ";
	cin >> dimes;
	cout << "How many quarters do you have? ";
	cin >> quarters;
	cout << "How many half dollars do you have? ";
	cin >> half_dollars;
	cout << "How many one dollar coins do you have? ";
	cin >> one_dollar_coins;
	cout << "The value of all of your coins is $" << (pennies+5*nickels+10*dimes+25*quarters+50*half_dollars+100*one_dollar_coins)/100.0 << '\n';
}
#include "std_lib_facilities.h"

int main()
{
	string operation;
	double st, nd;
	cin >> operation >> st >> nd;

	if (operation == "+" or operation == "plus") cout << st+nd <<endl;
	else if (operation == "-" or operation == "minus") cout << st-nd<<endl;
	else if (operation == "*" or operation == "mul") cout << st*nd<<endl;
	else if (operation == "/" or operation == "div") cout << st/nd<<endl;
}
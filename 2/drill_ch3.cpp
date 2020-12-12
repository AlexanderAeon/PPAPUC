#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to \n";
	string first_name;
	cin >> first_name;

	cout << "Enter the name of another friend: \n";
	string friend_name;
	cin >> friend_name;

	cout << "Is friend male or female? Print f or m.\n";
	char friend_sex {0};
	cin >> friend_sex;

	cout << "Enter the recipient's age.\n";
	int age;
	cin >> age;
	if (age <= 0 or age >= 110) {
		simple_error("You're kidding!");
	}


	cout << "Dear " << first_name << ", \n";
	cout << "How are you? I am fine. I miss you. ";
	cout << "Wubba Lubba dub dub. ";
	cout << "Have you seen " << friend_name << " lately?";
	if (friend_sex == 'm')
		cout << " If you see " << friend_name << " please ask him to call me\n";
	if (friend_sex == 'f')
		cout << " If you see " << friend_name << " please ask her to call me\n";
	cout << "\nI hear you just had a birthday and you are " << age << " old. \n";

	if (age < 12) {
		cout << "Next year you will be " << age+1 << ".\n";
	}
	else if (age == 17) {
		cout << "Next year you will be able to vote.\n";
	}
	else if (age > 70) {
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "Yours, sincerely,\n\n" << "Alexander\n";
}
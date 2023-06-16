#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter the num1: ";
	cin >> num1;
	cout << "Enter the num2: ";
	cin >> num2;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	int action;
	cout << "\n 1 is '+' \n 2 is '-' \n 3 is '*' \n 4 is '/' "<<endl;
	cout << "Enter the action : ";
	cin >> action;
	if (action > 4 || action < 1)
	{
		cout << "value does not match";
	}
	cout << endl;
	switch (action)
	{
	case 1:
		int sum;
		sum = *ptr1 + *ptr2;
		cout << "Sum = " << sum;
		break;
	case 2:
		int dif;
		dif = *ptr1 - *ptr2;
		cout << "Difference = " << dif;
		break;
	case 3:
		int mul;
		mul = *ptr1 * *ptr2;
		cout << "Mul. = " << mul;
		break;
	case 4:
		int division;
		division = *ptr1 / *ptr2;
		cout << "Division = " << division;
		break;
	}


	system("pause>nul");
	return 0;
}
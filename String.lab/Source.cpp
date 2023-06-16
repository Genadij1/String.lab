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

	swap(*ptr2, *ptr1);

	cout << "num1 = " << *ptr1 << " " << "num2 = " << *ptr2;



	system("pause>nul");
	return 0;
}
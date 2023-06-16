#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int num;
	cout << "Enter the num: ";
	cin >> num;

	int* ptr = &num;

	if (*ptr >= 0 )
	{
		cout << *ptr << " is " << "positive";
	}
	else
	{
		cout << *ptr << " is " << "negative";
	}


	system("pause>nul");
	return 0;
}
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = { 1, 2, 3, 4, 5 };
    int sum = 0;

    int* ptr = arr;

    for (int i = 0; i < SIZE; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "Sum elements of massive = " << sum << endl;

    system("pause>nul");
    return 0;
}
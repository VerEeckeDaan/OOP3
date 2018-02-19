#include <iostream>

using namespace std;

int main()
{
    int x = 15;
    int * pX = &x;

    (*pX) = 45;

    int numbers [10];

    cout << "address of x = " << &x << endl;
    cout << "address of x = " << pX << endl;
    cout << "address of numbers = " << numbers;

	return 0;
}

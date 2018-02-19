#include <iostream>

using namespace std;

int main()
{
    int x = 15;
    int * pX = &x;

    pX = 45;

    cout << "address of x = " << &x << endl;
    cout << "address of x = " << pX << endl;

	return 0;
}

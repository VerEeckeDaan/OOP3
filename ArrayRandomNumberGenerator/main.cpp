#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int i;
int array[50];
int counter = 0;

int main()


{
	cout << "The array consist of 10 elements is: ";
	cout << endl;

	srand ( time(0) );

	for (int j = 0;j<50;j++)
	{

		i = rand() % 101;


		 if (i != i-1)
			array[j]=i;

		 else
		 {
			i = rand() % 101;
		 array[j]=i;
		 }
	}

	for (int k = 0; k < 50 ; k++)
	{
		cout << array[k] << " ";

	}
	cout << endl;

	return 0;
}

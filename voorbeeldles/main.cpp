#include <iostream>
#include <cstdlib>

using namespace std;
int i;
int array[30];
int odd;
int max;
int counter;

int main()
{
	for (int j = 0;j<30;j++)
	{

		i = rand() % 101;
		 array[i]=i;

	}

	for (int k = 0; k < 30 ; k++)
	{
		cout << array[k] << " ";

	}

	for (int l = 0; l < 30 ; l++)
	{
		odd = array[0];
		max = array[0];
		if (array[l] % 2 != 0 && array[l] > max)
		{
			odd = array[l];
			max = array[l];
		}
		if (array[l] % 2 == 0)
			++counter;

		if (array[l] % 2 == 0 && array[l] > max)
		{
			for (int m = 0; m < counter ; m++)
				cout << array[m];

		}
	}

	return 0;
}

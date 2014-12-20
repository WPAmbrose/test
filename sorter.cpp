#include <cstdlib>
#include <iostream>

using namespace std;

void bsort1(int*, int);
void bsort2(int*, int);

int main()
{
	const int arr_size = 7;
	
	int test[arr_size];
	int copied[arr_size];
	
	
	for (int tmp = 0; tmp < arr_size; tmp++)
	{
		cout << "number " << tmp << "? ";
		cin >> test[tmp];
		copied[tmp] = test[tmp];
	}

	bsort1(test, arr_size);
	
	for (int x = 0; x < arr_size; x++)
	{
		cout << test[x] << endl;
	}
	
	bsort2(copied, arr_size);
	
	for (int x = 0; x < arr_size; x++)
	{
		cout << copied[x] << endl;
	}
	
	system("PAUSE");

	return 0;
}

void bsort1(int* array, int array_size)
{
	// sorts an array passed in using bubble sort - theorized broken
	
	bool swapped = true;
	int cnt, tmp;
	
	while (swapped)
	{
		for (cnt = 1; cnt < array_size; cnt++)
		{
			if (array[cnt] < array[cnt - 1])
			{
				tmp = array[cnt - 1];
				array[cnt - 1] = array[cnt];
				array[cnt] = tmp;
				swapped = true;
			}
			else
			{
				swapped = false;
			}
		}
	}
	return;
}

void bsort2(int* array, int array_size)
{
	// sorts an array passed in using bubble sort - theorized fixed
	
	bool swapped = true;
	int cnt, tmp;
	
	while (swapped)
	{
		swapped = false;
		for (cnt = 1; cnt < array_size; cnt++)
		{
			if (array[cnt] < array[cnt - 1])
			{
				tmp = array[cnt - 1];
				array[cnt - 1] = array[cnt];
				array[cnt] = tmp;
				swapped = true;
			}
		}
	}
	return;
}

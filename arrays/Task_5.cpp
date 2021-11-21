#include<iostream>
using namespace std;

/// ///////////////////////////////////////////

int main()
{
	srand(time(NULL));

	const int num = 5;
	int arr[num],
		arr2[num],
		arr3[num];

	for (int i = 0; i < num; i++)
	{
		arr[i] = rand() % 20;
		arr2[i] = rand() % 20;
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < num; i++)
	{
		cout << arr2[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < num; i++)
	{
		arr3[i] = arr[i] + arr2[i];
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr3[i] << "\t";
	}
	return 0;
}
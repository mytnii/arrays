#include<iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	int num = 10;
	int arr[10],
		arr2[5],
		arr3[5]{};

	for (int i = 0; i < num; i++)
	{
		arr[i] = rand() % 20;
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < num - 5; i++)
	{
		arr2[i] = arr[i];
	}

	for (int i = 5; i < num; i++)
	{
		arr3[i - 5] = arr[i];
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << "\t";
	}

	return 0;
}
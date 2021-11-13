#include<iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	const int num = 10;
	int arr[num];

	for (int i = 0; i < num; i++)
	{
		arr[i] = rand() % 20 - 10;
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] < 0)
		{
			sum += arr[i];
		}
	}

	int min = arr[0],
		max = arr[0],
		countMin = 0,
		countMax = 0;

	cout << sum << endl;

	for (int i = 0; i < num; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			countMin = i;
		}
	}

	for (int i = 0; i < num; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			countMax = i;
		}
	}

	long long com = 1;

	if (countMin < countMax)
	{
		for (int i = countMin; i < countMax; i++)
		{
			com *= arr[i];
		}
	}

	if (countMin > countMax)
	{
		for (int i = countMin; i > countMax; i--)
		{
			com *= arr[i];
		}
	}

	cout << com << endl;

	long long comEven = 1;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] % 2 == 0)
		{
			comEven *= arr[i];
		}
	}

	cout << comEven << endl;

	int lastNegative = 0,
		sumNegative = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] < 0)
		{
			for (int j = i; j < num; j++)
			{
				if (arr[j] < 0)
				{
					lastNegative = j;
				}

			}

			for (int j = i; j < lastNegative; j++)
			{
				sumNegative += arr[j];
			}
			break;
		}
	}

	cout << sumNegative << endl;

	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	int num = 5;
	int arr[100];

	for (int i = 0; i < num; i++)
	{
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	int min = arr[0];

	for (int i = 0; i < num; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << min << endl;

	int max = arr[0];

	for (int i = 0; i < num; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << max << endl;

	int even = 0;

	for (int i = 0; i < num; i++)
	{
		if (i + 1 % 2 == 0 && arr[i] % 2 == 0)
		{
			even++;
		}
	}

	cout << even << endl;

	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}

	cout << sum << endl;

	int num2;

	cout << "Enter number: ";
	cin >> num2;

	for (int i = 0; i < num; i++)
	{
		if (num2 == arr[i])
		{
			cout << i + 1 << endl;
			break;
		}

		if (i == num - 1)
		{
			cout << "There is no such number\n";
		}
	}

	int num3 = 0;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (arr[i] < arr[j])
			{
				num3 = arr[i];
				arr[i] = arr[j];
				arr[j] = num3;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	int num4;

	cout << "Enter number: ";
	cin >> num4;


	for (int i = 0; i < num; i++)
	{
		if (arr[i] % 2 == 0)
		{
			for (int j = num; j > i + 1; j--)
			{
				arr[j] = arr[j - 1];
			}
			num++;
			i++;
			arr[i] = num4;
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] % 2 != 0)
		{
			num--;

			for (int j = i; j < num; j++)
			{
				arr[j] = arr[j + 1];
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	int max2 = arr[0],
		max3 = arr[0],
		count = 0;
	long long com;

	for (int i = 0; i < num; i++)
	{
		if (max2 < arr[i])
		{
			count = i;
			max2 = arr[i];

		}

		if (max3 < arr[i] && count != i)
		{
			max3 = arr[i];
		}

	}


	cout << max2 << "\t" << max3 << endl;

	int max4 = arr[0];

	for (int i = 0; i < num; i++)
	{
		if (max4 < arr[i] && arr[i] != max2 && arr[i] != max3)
		{
			max4 = arr[i];
		}
	}

	cout << max2 << "\t" << max3 << "\t" << max4 << endl;

	int num2;

	cout << "Enter number: ";
	cin >> num2;

	bool flag;

	for (int i = 1; i <= num2; i++)
	{
		flag = false;
		for (int j = 0; j < num; j++)
		{
			if (i == arr[j])
			{
				flag = true;
			}
		}

		if (flag == true)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int months = 12;
	int arr[months],
		start,
		end;

	for (int i = 0; i < months; i++)
	{
		cout << "Прибыль за " << i + 1 << " месяц: ";
		cin >> arr[i];
	}

	cout << "Диапозон поиска наибольшей прибыли от: ";
	cin >> start;
	cout << "До: ";
	cin >> end;

	int max = arr[start - 1],
		min = arr[start - 1],
		count = start;

	for (int i = start - 1; i < end; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			count = i + 1;;
		}
	}

	cout << "Максимальная прибыль в " << count << " месяце: " << max << endl;

	count = start;

	for (int i = start - 1; i < end; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			count = i + 1;
		}
	}

	cout << "Минимальная прибыль в " << count << " месяце: " << min << endl;

	return 0;
}
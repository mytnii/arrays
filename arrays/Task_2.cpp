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
		cout << "������� �� " << i + 1 << " �����: ";
		cin >> arr[i];
	}

	cout << "�������� ������ ���������� ������� ��: ";
	cin >> start;
	cout << "��: ";
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

	cout << "������������ ������� � " << count << " ������: " << max << endl;

	count = start;

	for (int i = start - 1; i < end; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			count = i + 1;
		}
	}

	cout << "����������� ������� � " << count << " ������: " << min << endl;

	return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int item, m, start = 0, end = 16;
	bool found = false;
	int arr[17] = { -4, 2, 7, 10, 15, 20, 22, 25, 30, 36, 42, 50, 56, 68, 85, 92, 103 };
	cout << "Enter number to search: ";
	cin >> item;
	m = int((start + end) / 2);
	while (start <= end)
	{
		
		if (arr[m] == item)
		{
			cout << "Item is found at index: " << m << endl;
			break;
		}
		else if (item > arr[m])
		{
			start = m + 1;
		}
		else if (item < arr[m])
		{
			end = m;
		}
		m = int((start + end) / 2);
	}
	if (start > end)
	{
		cout << "Item not found";
	}

	_getch();
	return 0;
}

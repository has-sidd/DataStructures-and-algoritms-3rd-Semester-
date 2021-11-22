#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int temp, ptr, arr[5] = { 23, 11, 37, 28, 15 };

	for (int i = 0; i <= 4; i++)
	{
		ptr = 0;
		while (ptr < 4-i)
		{
			if (arr[ptr] > arr[ptr + 1])
			{
				temp = arr[ptr + 1];
				arr[ptr + 1] = arr[ptr];
				arr[ptr] = temp;
			}
			ptr++;
		}
	}
	cout << "Sorted: " << endl;
	for (int i = 0; i <= 4; i++)
		{
			cout << arr[i];
		}
		_getch();
	}
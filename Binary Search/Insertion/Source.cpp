#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int item, k;
	int num[5] = { 5, 2, 1, 8, 9 };
	int j = 4;
	cout << "Enter number to insert: ";
	cin >> item;
	cout << "Position: ";
	cin >> k;
	while (j>=k)
	{
		num[j + 1] = num[j];
		j--;
	}
	num[k] = item;
	for (int i = 0; i <= 5; i++)
	{
		cout << num[i] << endl;
	}
	_getch();
}
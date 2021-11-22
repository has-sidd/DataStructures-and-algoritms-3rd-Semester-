#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int k, j;
	int const n = 5;
	int num[n] = { 5, 2, 1, 8, 9 };
	cout << "Index of element to delete: ";
	cin >> k;
	j = k;
	while (j < n - 1)
	{
		num[j] = num[j + 1];
		j++;
	}
	for (int i = 0; i <= n - 2; i++)
	{
		cout << num[i] << endl;
	}
	_getch();
}
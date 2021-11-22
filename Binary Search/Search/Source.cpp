#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int item, index;
	bool found = false;
	int num[5] = { 5, 2, 1, 8, 9 };
	cout << "Item to search: ";
	cin >> item;
	for (int i = 0; i <= 4; i++)
	{
		if (num[i] == item)
		{
			found = true;
			index = i;
		}
		
	}
	if (found == true)
	{
		cout << "Item is at index: " << index << endl;
	}
	else
	{
		cout << "Item not found!";
	}
	_getch();
}
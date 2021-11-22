#include<iostream>
#include<conio.h>
using namespace std;

int stack[6];
int top = -1;

void push(int val)
{
	if (top >= 5)
	{
		cout << "Stack Overflow " << endl;
	}
	top++;
	stack[top] = val;
}

void pop()
{
	if (top <= -1)
	{
		cout << "Under flow" << endl;
	}
	top--;
}

int main()
{
	push(6);
	push(11);
	push(5);
	push(2);
	push(7);
	cout << "Stack:" << endl;
	for (int i=top; i >=0; i--)
	{
		cout << stack[i] << endl;
	}
	pop();
	pop();
	cout << "Stack:" << endl;
	for (int j=top; j >=0; j--)
	{
		cout << stack[j] << endl;
	}
	_getch();
}
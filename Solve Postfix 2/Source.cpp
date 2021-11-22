#include<iostream>
#include<conio.h>
#include<stack>
#include<string>
using namespace std;

int main()
{
	stack<int> Stack;
	string p;
	int i = 0;
	int a, b;
	p = { '5', '6', '2', '+', '*', '8', '4', '/', '-', ')' };
	while (p[i] != ')')
	{
		if (p[i] != '+' || '-' || '*' || '/')
		{
			Stack.push(p[i]);
		}
		else
		{
			switch (p[i])
			{
			case '+':
				a = int(Stack.top());
				Stack.pop();
				b = int(Stack.top());
				Stack.pop();
				Stack.push(a + b);

			case '-':
				a = int(Stack.top());
				Stack.pop();
				b = int(Stack.top());
				Stack.pop();
				Stack.push(a - b);

			case '*':
				a = int(Stack.top());
				Stack.pop();
				b = int(Stack.top());
				Stack.pop();
				Stack.push(a * b);

			case '/':
				a = int(Stack.top());
				Stack.pop();
				b = int(Stack.top());
				Stack.pop();
				Stack.push(a / b);

			}
		}
		i++;
	}
	cout << "Result: " << Stack.top() << endl;
	_getch();
}
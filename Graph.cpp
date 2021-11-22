#include<iostream>
#include<conio.h>
using namespace std;

int A[4][4];

void AddEdge(int u, int v)
{
	A[u][v] = 1;
	A[v][u] = 1;
}

void DisplayGraph()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	AddEdge(0, 1);
	AddEdge(0, 2);
	AddEdge(1, 0);
	AddEdge(1, 2);
	AddEdge(2, 3);
	AddEdge(3, 2);
	DisplayGraph();

	_getch();
	return 0;
}
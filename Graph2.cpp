#include<iostream>
#include<conio.h>
#include<list>
using namespace std;

class Graph
{
	int V;
	list<int> *l;

public:
	Graph(int V)
	{
		this->V = V;
		l = new list<int>[V];
	}
	
	void AddEdge(int u, int v)
	{
		l[u].push_back(v);
		l[v].push_back(u);
	}
	void PrintList()
	{
		for (int i = 0; i < V; i++)
		{
			cout << "Node " << i << " -> ";
			for (int nbr : l[i])
			{
				cout << nbr << ", ";
			}
			cout << endl;
		}
	}
};

int main()
{
	Graph g(4);
	g.AddEdge(0, 1);
	g.AddEdge(0, 2);
	g.AddEdge(1, 0);
	g.AddEdge(1, 2);
	g.AddEdge(2, 3);
	g.AddEdge(3, 2);
	cout << "Adjacent List: " << endl;
	cout << endl;
	g.PrintList();
	_getch();
}
#include<iostream>
#include<conio.h>
#include<list>
using namespace std;

class DFSGraph
{
	int v;
	list<int> *adjL;
	void DfsUtil(int v, bool visited[])
	{
		visited[v] = true;
		cout << v << " ";
		list<int>::iterator i;
		for (i = adjL[v].begin(); i != adjL[v].end(); i++)
		{
			if (!visited[*i])
				DfsUtil(*i, visited);
		}
	}
public:
	DFSGraph(int v)
	{
		this->v = v;
		adjL = new list<int>[v];
	}
	void AddEdge(int u, int v)
	{
		adjL[u].push_back(v);
	}
	void DFS()
	{
		bool *visited = new bool[v];
		for (int i = 0; i < v; i++)
		{
			visited[i] = false;
			for (int i = 0; i < v; i++)
			{
				if (visited[i] == false)
					DfsUtil(i, visited);
			}
		}
	}
};

int main()
{
	DFSGraph g(5);
	g.AddEdge(0, 1);
	g.AddEdge(1, 0);
	g.AddEdge(0, 2);
	g.AddEdge(2, 0);
	g.AddEdge(0, 3);
	g.AddEdge(3, 0);
	g.AddEdge(1, 2);
	g.AddEdge(2, 1);
	g.AddEdge(2, 4);
	g.AddEdge(4, 2);

	cout << "Depth-first traversal:" << endl;
	cout << endl;
	g.DFS();
	_getch();
	return 0;
}
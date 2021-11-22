#include<iostream>
#include <list>
#include<conio.h>
using namespace std;

class Graph
{
	int V;
	list<int> *adjL;
public:
	Graph(int V)
	{
		this->V = V;
		adjL = new list<int>[V];
	}
	void addEdge(int u, int v)
	{
		adjL[u].push_back(v);
	}
	void BFS(int s)
	{
		bool *visited = new bool[V];
		for (int i = 0; i < V; i++)
			visited[i] = false;
		list<int> queue;
		visited[s] = true;
		queue.push_back(s);
		list<int>::iterator i;

		while (!queue.empty())
		{
			s = queue.front();
			cout << s << " ";
			queue.pop_front();
			for (i = adjL[s].begin(); i != adjL[s].end(); ++i)
			{
				if (!visited[*i])
				{
					visited[*i] = true;
					queue.push_back(*i);
				}
			}
		}
	}
};
int main()
{
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 0);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 2);

	cout << "Breadth First Traversal:"<<endl;
	cout << endl;
	g.BFS(0);
	_getch();
	return 0;
}

#include <iostream>
#include <vector>
#include<conio.h>
using namespace std;

struct Edge {
	int src, dest;
};

class Graph
{
public:
	vector<vector<int>> adjList;
	Graph(const vector<Edge> &edges, int N)
	{
		adjList.resize(N);
		for (auto &edge : edges) {
			adjList[edge.src].push_back(edge.dest);
		}
	}
};
bool isConnected(const Graph &graph, int src, int dest,
	vector<bool> &discovered, vector<int> &path)
{
	discovered[src] = true;
	path.push_back(src);
	if (src == dest) {
		return true;
	}
	for (int i : graph.adjList[src])
	{
		if (!discovered[i])
		{
			if (isConnected(graph, i, dest, discovered, path))
				return true;
		}
	}
	path.pop_back();
	return false;
}
void printPath(const vector<int> &path)
{
	for (int i : path)
		cout << i << ' ';
	cout << endl;
}

int main()
{
	vector<Edge> edges = {
		{ 0, 3 }, { 1, 0 }, { 1, 2 }, { 1, 4 }, { 2, 7 }, { 3, 4 },
		{ 3, 5 }, { 4, 3 }, { 4, 6 }, { 5, 6 }, { 6, 7 }
	};
	int N = 8;
	Graph graph(edges, N);
	vector<bool> discovered(N);
	int src = 0, dest = 7;
	vector<int> path;
	if (isConnected(graph, src, dest, discovered, path))
	{
		cout << "Path exists from vertex " << src << " to vertex " << dest;
		cout << "\nThe complete path is: "; printPath(path);
	}
	else {
		cout << "No path exists between vertices " << src << " and " << dest;
	}
	_getch();
	return 0;
}
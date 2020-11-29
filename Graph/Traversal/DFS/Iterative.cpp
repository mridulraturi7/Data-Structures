/*
    DFS Traversal of a Graph.
*/

#include<iostream>
#include<list>
#include<stack>

using namespace std;

class Graph
{
    int V;

    list<int> *adj;

    public:
        Graph()
        {

        }

        Graph(int n);

        void addEdge(int u, int v);

        void dfs(int s);

        void printGraph();
};

Graph::Graph(int n)
{
    this->V = n;

    adj = new list<int>[V];
}

int main()
{

    return 0;
}
/*
    Implementation 3.

    BFS Traversal of a Graph.

    Perform the BFS traversal of the following Graph:

                    0---------1
                    | \       |
                    |   \     |
                    |     \   |
                    |       \ |
                    3---------2
                     \       /
                      \     /
                       \   /
                        \ /
                         4
*/

#include<iostream>
#include<list>
#include<queue>

using namespace std;

class Graph
{
    int V;

    list<int> *adj;

    public:

        

        Graph(int n);

        void addEdge(int u, int v);

        void bfs(int s);

        void printGraph();
};

Graph::Graph(int n)
{
    this->V = n;
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}

void Graph::bfs(int s)
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    queue<int> q;
    q.push(s);

    visited[s] = true;

    while(q.empty() == false)
    {
        int temp = q.front();
        cout<<temp<<" ";
        q.pop();

        list<int>::iterator it;
        for(it = adj[temp].begin(); it != adj[temp].end(); it++)
        {
            if(!visited[*it])
            {
                visited[*it] = true;
                q.push(*it);
            }
        }
    }
}

void Graph::printGraph()
{
    list<int>::iterator it;
    for(int i = 0; i < V; i++)
    {
        cout<<"Adjacenct Vertices of "<<i<<" vertex: ";
        for(it = adj[i].begin(); it != adj[i].end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    Graph G(5);

    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(0, 3);

    G.addEdge(1, 0);
    G.addEdge(1, 2);

    G.addEdge(2, 0);
    G.addEdge(2, 1);
    G.addEdge(2, 3);
    G.addEdge(2, 4);

    G.addEdge(3, 0);
    G.addEdge(3, 2);
    G.addEdge(3, 4);

    G.addEdge(4, 2);
    G.addEdge(4, 3);

    cout<<"Graph Status (Adjacency Matrix): "<<endl;
    G.printGraph();

    cout<<"BFS Traversal of the Graph (start vertex - 0): ";
    G.bfs(0);

    return 0;
}
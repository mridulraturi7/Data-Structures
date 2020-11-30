/*
    Implementation 5.

    DFS Traversal of a Graph.

    Perform the DFS traversal of the following Graph:

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


void Graph::dfs(int s)
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    stack<int> st;
    st.push(s);
    visited[s] = true;

    list<int>::iterator it;
    while(st.empty() == false)
    {
        int temp = st.top();
        cout<<temp<<" ";
        st.pop();

        for(it = adj[temp].begin(); it != adj[temp].end(); it++)
        {
            if(!visited[*it])
            {
                visited[*it] = true;
                st.push(*it);
            }
        }
    }
}

void Graph::printGraph()
{
    for(int i = 0; i < V; i++)
    {
        list<int>::iterator it;
        cout<<"Adjacent Vertices of "<<i<<" vertex";
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

    cout<<"DFS Traversal of the Graph (start vertex - 0): ";
    G.dfs(0);

    return 0;
}
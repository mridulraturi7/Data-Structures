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

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
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

    return 0;
}
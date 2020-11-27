/*
    Adjacency List Representation of a Graph.
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> array[5];

void addEdge(int u, int v)
{
    array[u].push_back(v);
}

void printGraph()
{
    for(int u = 0; u < 5; u++)
    {
        cout<<"Adjacency Nodes of "<<u<<": ";
        for(auto i : array[u])
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(1, 0);
    addEdge(1, 3);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(2, 4);
    addEdge(3, 0);
    addEdge(3, 1);
    addEdge(3, 2);
    addEdge(3, 4);
    addEdge(4, 2);
    addEdge(4, 3);

    cout<<"The status of Adjacency Matrix: "<<endl;
    printGraph();

    return 0;
}
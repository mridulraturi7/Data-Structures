/*
    Implementation 1.

    Adjacency Matric Representation of a Graph.

    Construct the Adjacency Matrix of following Graph:

                    0---------1
                    |         |
                    |         |
                    |         |
                    |         |
                    2---------3
                     \       /
                      \     /
                       \   /
                        \ /
                         4
*/

#include<iostream>

using namespace std;

int G[5][5];

void addEdge(int u, int v)
{
    G[u][v] = 1;
}

void printGraph()
{
    for(int u = 0; u < 5; u++)
    {
        for(int v = 0; v < 5; v++)
        {
            cout<<G[u][v]<<" ";
        }
        cout<<"\n";
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
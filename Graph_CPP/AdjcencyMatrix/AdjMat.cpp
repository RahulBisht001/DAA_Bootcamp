#include <iostream>
#include <cstring>

// #include <bits/stdc++.h>
using namespace std;

void addEdge(int **adj, int s, int d)
{
    adj[s][d] = 1;
    adj[d][s] = 1;
}

// Print the graph
void printGraph(int **adj, int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "\n Vertex " << d << ":";
        for (int i = 0; i < V; ++i)
        {
            if (adj[d][i] == 1)
                cout << "-> " << i;
        }
        printf("\n");
    }
}

int main()
{
    int v = 5;
    int **adj = new int *[v];
    for (int i = 0; i < v; ++i)
    {
        adj[i] = new int[v];
        memset(adj[i], 0, sizeof(int) * v);
    }

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);

    printGraph(adj, v);

    return 0;
}

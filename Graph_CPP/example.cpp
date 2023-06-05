#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &vis, vector<int> &traversal)
{
    vis[node] = true;
    traversal.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(it, adj, vis, traversal);
    }
}
int main()
{
    /* input a matrix */
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    for (auto &row : matrix)
        for (auto &col : row)
            cin >> col;

    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
                adj[i].push_back(j);
        }
    }
    /* dfs function */
    vector<bool> vis(n, false);
    vector<int> traversal;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i, adj, vis, traversal);
    }
    /* output */
    for (auto &i : traversal)
        cout << i << " ";
    return 0;
}
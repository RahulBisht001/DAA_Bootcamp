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
    /* input a mat */
    int n;
    cout << "Enter length row" << endl;
    cin >> n;

    // vector<vector<int>> mat(n, vector<int>(n, 0));
    // for (auto &row : mat)
    //     for (auto &col : row)
    //         cin >> col;

    int mat[n][n];
    cout << "ENter 1 if Node exist else 0" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
            mat[j][i] = mat[i][j];
        }
    }

    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
                adj[i].push_back(j);
        }
        cout << endl;
    }
    /* dfs function */
    vector<bool> vis(n + 1, false);
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
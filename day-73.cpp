#include <bits/stdc++.h>
using namespace std;
bool solve(int src, int par, vector<int> adj[], vector<bool> &vis)
{
    vis[src] = true;
    for (auto it : adj[src])
    {
        if (!vis[it])
        {
            if (solve(it, src, adj, vis))
            {
                return true;
            }
        }
        else if (it != par)
            return true;
    }
    return false;
}
bool isCycle(int V, vector<int> adj[])
{
    vector<bool> vis(V, false);
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            bool c = solve(i, -1, adj, vis);
            if (c)
                return true;
        }
    }
    return false;
}
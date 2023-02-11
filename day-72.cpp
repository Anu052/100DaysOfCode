#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool solve(int src, vector<int> &vis, vector<int> &order, vector<int> adj[])
    {
        vis[src] = 1;
        order[src] = 1;
        for (auto it : adj[src])
        {
            if (!vis[it])
            {
                bool conf = solve(it, vis, order, adj);
                if (conf == true)
                    return true;
            }
            else if (order[it])
                return true;
        }
        order[src] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[])
    {
        vector<int> vis(V, 0);
        vector<int> order(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                bool c = solve(i, vis, order, adj);
                if (c == true)
                    return true;
            }
        }
        return false;
    }
};
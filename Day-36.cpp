#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vector<int> in(V, 0);
    vector<int> ans;
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            in[it]++;
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (in[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int td = q.front();
        q.pop();
        ans.push_back(td);
        for (auto x : adj[td])
        {
            in[x]--;
            if (in[x] == 0)
                q.push(x);
        }
    }
    return ans;
}
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter the size of array" << endl;
        cin >> n;
        int a[n];
        cout << "enter the array elements" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
string FirstNonRepeating(string A)
{

    vector<int> vis(26.0);
    string ans = "";
    vector<char> v;
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        if (!vis[A[i] - 'a'])
        {
            v.push_back(A[i]);
        }
        vis[A[i] - 'a']++;
        int f = 0;
        int m = v.size();
        for (int j = 0; j < m; j++)
        {
            if (vis[v[j] - 'a'] == 1)
            {
                ans.push_back(v[j]);
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            ans.push_back('#');
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
        string s;
        cout << "enter the input string" << endl;
        cin >> s;
        FirstNonRepeating(s);
    }
}
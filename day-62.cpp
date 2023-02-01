#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;
int dp[1001][1001];
class Solution
{
public:
    int func(int x, int y, string s1, string s2)
    {
        if (x == -1 or y == -1)
            return 0;
        if (dp[x][y] != -1)
            return dp[x][y];
        if (s1[x] == s2[y])
        {
            return dp[x][y] = 1 + func(x - 1, y - 1, s1, s2);
        }
        int a = func(x - 1, y, s1, s2);
        int b = func(x, y - 1, s1, s2);
        return dp[x][y] = max(a, b);
    }
    int lcs(int x, int y, string s1, string s2)
    {
        memset(dp, -1, sizeof(dp));
        return func(x - 1, y - 1, s1, s2);
    }
};

int main()
{
    int t, n, k, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
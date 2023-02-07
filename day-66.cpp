#include <bits/stdc++.h>
using namespace std;
int countMin(string str)
{
    int n = str.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str[i] == str[n - 1 - j])
                dp[i + 1][j + 1] = 1 + dp[i][j];
            else
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
        }
    }
    return n - dp[n][n];
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
        countMin(s);
    }
}

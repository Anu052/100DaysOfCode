#include <bits/stdc++.h>
using namespace std;
int t[1002][1002];
int solve(int W, int wt[], int val[], int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            if (i == 0 or j == 0)
                t[i][j] == 0;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][W];
}
int knapSack(int W, int wt[], int val[], int n)
{
    // Your code here
    memset(t, 0, sizeof(t));
    return solve(W, wt, val, n);
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
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
}
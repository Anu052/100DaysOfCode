#include <bits/stdc++.h>
using namespace std;
int arr[201][201];

int solve(int n, int k)
{

    if (k == 0 || k == 1)
    {
        return k;
    }

    if (n == 1)
    {
        return k;
    }

    if (arr[n][k] != -1)
    {
        return arr[n][k];
    }

    int ans = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        ans = min(ans, 1 + max(solve(n - 1, i - 1), solve(n, k - i)));
    }

    return (arr[n][k] = ans);
}

int eggDrop(int n, int k)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            arr[i][j] = -1;
        }
    }

    return solve(n, k);
}
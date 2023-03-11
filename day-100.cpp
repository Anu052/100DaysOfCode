#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> res;
    vector<int> row{1, 0, -1, 0};
    vector<int> col{0, 1, 0, -1};
    vector<string> ins{"D", "R", "U", "L"};
    bool validCoordinates(int i, int j, int n)
    {
        if ((i >= 0 && i < n) && (j >= 0 && j < n))
            return true;
        return false;
    }
    void solve(int i, int j, string curr, vector<vector<int>> &m, int n)
    {
        if (!validCoordinates(i, j, n) || m[i][j] == 0)
            return;
        if (i == n - 1 && j == n - 1)
        {
            res.push_back(curr);
            return;
        }

        m[i][j] = 0;

        for (int a = 0; a < 4; a++)
        {
            solve(i + row[a], j + col[a], curr + ins[a], m, n);
        }

        m[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        solve(0, 0, "", m, n);
        return res;
    }
};
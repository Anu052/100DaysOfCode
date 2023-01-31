#include <bits/stdc++.h>
using namespace std;
bool issubetsum(vector<int> arr, int sum)
{
    int n = arr.size();
    int i, j;
    bool t[n + 1][sum + 1];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < sum; j++)
        {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
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
        vector<int> a(n);
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            a.push_back(i);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        issubetsum(a, sum);
    }
}
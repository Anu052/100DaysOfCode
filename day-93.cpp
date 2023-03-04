#include <bits/stdc++.h>
using namespace std;
int minxorpair(int N, int arr[])
{
    sort(arr, arr + N);
    int ans = INT_MAX;

    for (int i = 0; i < N - 1; i++)
    {
        ans = min(ans, arr[i] ^ arr[i + 1]);
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        minxorpair(n, a);
    }
}
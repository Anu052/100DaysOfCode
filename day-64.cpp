#include <bits/stdc++.h>
using namespace std;
void rearrange(long long *arr, int n)
{
    vector<long long int> v;
    for (int i = 0; i <= n / 2; i++)
    {
        v.push_back(arr[n - i - 1]);
        v.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = v[i];
    }
}
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        long long n;
        cout << "enter the array size" << endl;
        cin >> n;
        long long a[n];
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        rearrange(a, n);
    }
}
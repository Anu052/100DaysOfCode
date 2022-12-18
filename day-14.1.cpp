#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    int func(int a[], int n)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] > n / 2)
            {
                return a[i];
            }
        }
        return -1;
    }
};
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
        cout << "enter the array elemnt" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve ob;
        int ans = ob.func(a, n);
        cout << ans << endl;
    }
}
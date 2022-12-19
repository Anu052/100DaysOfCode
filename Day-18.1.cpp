//Count pairs with given sum
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    int func(int a[], int n, int k)
    {
        unordered_map<int, int> mp;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int b = k - a[i];
            if (mp[b])
            {
                sum += mp[b];
            }
            mp[a[i]]++;
        }
        return sum;
    }
};
int main()
{
    int t;
    cout << "enter the testcase value" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter the size of the array" << endl;
        cin >> n;
        int a[n];
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cout << "enter the target value" << endl;
        cin >> k;
        solve ob;
        int ans = ob.func(a, n, k);
        cout << ans << endl;
    }
}
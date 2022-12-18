// Product of Array Except Self
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    vector<int> func(vector<int> a, int n)
    {
        vector<int> l(n), r(n);
        l[0] = 1;
        r[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            l[i] = l[i - 1] * a[i - 1];
        }
        for (int j = n - 2; j >= 0; j--)
        {
            r[j] = r[j + 1] * a[j + 1];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = l[i] * r[i];
        }
        return a;
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
        cout << "enter the size of array" << endl;
        cin >> n;
        vector<int> a(n);
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve ob;
        vector<int> ans = ob.func(a, n);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << endl;
        }
    }
}
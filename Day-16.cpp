#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    int func(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(arr1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            ans.push_back(arr2[i]);
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < n; i++)
        {
            return ans[k - 1];
        }
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
        cout << "enter the size of first array" << endl;
        cin >> n;
        int a[n], b[n];
        cout << "enter the first array input element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cout << "enter the size of second array" << endl;
        cin >> m;
        cout << "enter the second array input element" << endl;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int k;
        cout << "enter the target value" << endl;
        cin >> k;
        solve ob;
        int ans;
        ans = ob.func(a, b, n, m, k);
        cout << ans << endl;
    }
}
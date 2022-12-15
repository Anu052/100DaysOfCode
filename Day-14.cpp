// Find First and Last Position of Element in Sorted Array
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    vector<int> func(int a[], int n, int x)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                ans.push_back(i);
                break;
            }
        }
        for (int j = n - 1; j > 0; j--)
        {
            if (a[j] == x)
            {
                ans.push_back(j);
                break;
            }
        }
        if (ans.size() == 0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        int n, x;
        cout << "enter the size of array" << endl;
        cin >> n;
        int a[n];
        cout << "enter the array elements" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "enter the target value" << endl;
        cin >> x;
        solve ob;
        vector<int> ans = ob.func(a, n, x);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << endl;
        }
    }
}
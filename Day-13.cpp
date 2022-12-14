//Trapping Rain Water
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    int func(int arr[], int n)
    {
        int low[n];
        int high[n];
        low[0] = arr[0];
        for (int i = 0; i < n; i++)
        {
            low[i] = max(low[i - 1], arr[i]);
        }
        high[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            high[i] = max(high[i + 1], arr[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += min(low[i], high[i]) - arr[i];
        }
        return sum;
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
        int a[n];
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve ob;
        int ans = ob.func(a, n);
        cout << ans << endl;
    }
}
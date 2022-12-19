//buy and sell stock
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    int maxprofit(int price[], int n)
    {
        int profit = 0;
        int curr = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (price[i] < curr)
            {
                curr = price[i];
            }
            else if (price[i] - curr > profit)
            {
                profit = price[i] - curr;
            }
        }
        return profit;
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve ob;
        int ans = ob.maxprofit(a, n);
        cout << ans << endl;
    }
}
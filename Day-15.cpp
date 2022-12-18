// Find Pair Given Difference
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    bool func(int a[], int n, int k)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] - a[j]) == k)
                {
                    return true;
                }
            }
        }
        return false;
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
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cout << "enter the diffrence value" << endl;
        cin >> k;
        solve ob;
        bool ans = ob.func(a, n, k);
        if (ans == true)
            cout << "yes pair is here" << endl;
        else
            cout << "no pair is not here" << endl;
    }
}
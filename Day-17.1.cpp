#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    static bool comp(int a, int b)
    {
        return __builtin_popcount(a) > __builtin_popcount(b);
    }
    void sortbyset(int a[], int n)
    {
        stable_sort(a, a + n, comp);
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
        solve ob;
        ob.sortbyset(a, n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
    }
}
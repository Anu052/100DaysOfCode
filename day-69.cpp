#include <bits/stdc++.h>
using namespace std;
int findMidSum(int ar1[], int ar2[], int n)
{
    int i;

    vector<int> v;

    //   sort(ar1,ar1+n);

    //   sort(ar2,ar1+n);

    for (i = 0; i < n; i++)

    {

        v.push_back(ar1[i]);

        v.push_back(ar2[i]);
    }

    sort(v.begin(), v.end());

    return (v[n - 1] + v[n]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        findMidSum(a, b, n);
    }
}
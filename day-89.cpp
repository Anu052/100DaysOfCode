#include <bits/stdc++.h>
using namespace std;
int maxIndexDiff(int arr[], int n)
{
    int ma = -1;
    for (int i = 0; i < n; i++)
    {
        int j = n - 1;
        while (i < j && arr[j] < arr[i])
        {
            j--;
        }
        ma = max(ma, j - i);
    }
    return ma;
}
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
        maxIndexDiff(a, n);
    }
}
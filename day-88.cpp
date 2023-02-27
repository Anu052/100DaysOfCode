#include <bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n)
{
    int brr[1000003] = {0};
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            brr[arr[i]] = 1;
        }
    }
    for (i = 1; i < 1000000; i++)
    {
        if (brr[i] == 0)
            return i;
    }
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
        missingNumber(a, n);
    }
}
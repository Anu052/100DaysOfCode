#include <bits/stdc++.h>
using namespace std;
int countTriplet(int arr[], int n)
{
    sort(arr, arr + n);

    reverse(arr, arr + n);

    int count = 0;

    for (int i = 0; i < n - 2; i++)
    {

        int j = i + 1, k = n - 1;

        while (j < k)
        {

            if (arr[i] == arr[j] + arr[k])
            {

                count++;
                j++;
                k--;
            }

            else if (arr[i] > arr[j] + arr[k])
            {

                k--;
            }

            else
            {

                j++;
            }
        }
    }

    return count;
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
        countTriplet(a, n);
    }
}
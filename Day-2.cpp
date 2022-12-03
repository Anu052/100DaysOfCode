#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    long long maxsub(int arr[], int n)
    {
        int max = INT_MIN;
        int max_til_here = 0;
        for (int i = 0; i < n; i++)
        {
            max_til_here = max_til_here + arr[i];
            if (max_til_here > max)
            {
                max = max_til_here;
            }
            if (max_til_here < 0)
            {
                max = 0;
            }
        }
        return max;
    }
};
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cout << "enter  the size" << endl;
        cin >> n;
        int a[n];
        cout << "enter  the element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solution ob;
        cout << ob.maxsub(a, n) << endl;
    }
}
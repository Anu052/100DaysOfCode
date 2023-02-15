
#include <bits/stdc++.h>
using namespace std;
bool customsort(const pair<int, char> &a, const pair<int, char> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int findPlatform(int arr[], int dep[], int n)
{
    vector<pair<int, char>> order;
    for (int i = 0; i < n; i++)
    {
        order.push_back(make_pair(arr[i], 'a'));
        order.push_back(make_pair(dep[i], 'd'));
    }
    sort(order.begin(), order.end(), customsort);
    int result = 1;
    int plat_needed = 0;
    vector<pair<int, char>>::iterator it = order.begin();
    for (; it != order.end(); it++)
    {
        if ((*it).second == 'a')
            plat_needed++;
        else
            plat_needed--;
        if (plat_needed > result)
            result = plat_needed;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int dep[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int j = 0; j < n; j++)
        {
            cin >> dep[j];
        }
        cout << findPlatform(arr, dep, n) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> countDistinct(int A[], int n, int k)
{
    vector<int> ans;
    unordered_map<int, int> map;

    for (int i = 0; i < k; i++)
        map[A[i]]++;

    ans.push_back(map.size());

    for (int i = k; i < n; i++)
    {

        if (map[A[i - k]] == 1)
            map.erase(A[i - k]);
        else
            map[A[i - k]]--;

        map[A[i]]++;
        ans.push_back(map.size());
    }

    return ans;
}
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        int n, k;
        cout << "enter the size of array" << endl;
        cin >> n;
        cout << "enter the size of k value" << endl;
        cin >> k;
        cout << "enter the array element" << endl;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        countDistinct(a, n, k);
    }
}
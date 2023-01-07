#include <bits/stdc++.h>
using namespace std;
int minSwaps(vector<int> &nums)
{
    // Code here
    int n = nums.size();
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {nums[i], i};
    }
    sort(v.begin(), v.end());
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second == i)
            continue;
        else
        {
            c++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return c;
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
        vector<int> ans;
        int a[n];
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            ans.push_back(a[i]);
        }
        int answer;
        answer = minSwaps(ans);
        cout << answer << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    vector<string> func(string str)
    {
        vector<string> ans;
        sort(str.begin(), str.end());
        do
        {
            ans.push_back(str);
        } while (
            next_permutation(str.begin(), str.end()));
        return ans;
    }
};
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        cout << "enter the string" << endl;
        string str;
        cin >> str;
        solve ob;
        vector<string> ans = ob.func(str);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << endl;
        }
    }
}
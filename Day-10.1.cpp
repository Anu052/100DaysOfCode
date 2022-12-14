#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> search(string pat, string txt)
    {
        vector<int> ans;
        int n = txt.size(), m = pat.size();
        for (int i = 0; i < n; i++)
        {
            string temp = txt.substr(i, m);
            if (temp == pat)
            {
                ans.push_back(i + 1);
            }
        }
        if (ans.empty())
            return {-1};
        else
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
        string S, pat;
        cout << "enter the first input string" << endl;
        cin >> S;
        cout << "enter  the second input string" << endl;
        cin >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
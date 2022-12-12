#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    string func(string s)
    {
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        sort(s.begin(), s.end());
        string str = "";
        for (int i = 0; i < s.size(); i++)
        {
            char l = tolower(s[i]);
            char u = toupper(s[i]);
            if (mpp[l] && mpp[u])
            {
                str = u;
            }
        }
        return str;
    }
};
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        string s;
        cout << "enter the input string" << endl;
        cin >> s;
        solve ob;
        string ans = ob.func(s);
        cout << ans << endl;
    }
}
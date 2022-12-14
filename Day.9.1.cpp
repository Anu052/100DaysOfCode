#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    int func(string s)
    {
        int c;
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (!st.empty() && s[i] == ')')
            {
                st.pop();
            }
            else
            {
                c++;
            }
        }
        return st.size() + c;
    }
};
int main()
{
    cout << "enter the test case value" << endl;
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cout << "enter the string" << endl;
        cin >> str;
        solve ob;
        int ans = ob.func(str);
        cout << ans << endl;
    }
}
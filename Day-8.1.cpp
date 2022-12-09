#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    bool func(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
                st.push(s[i]);
            else if (st.top() == '('  &&  s[i] == ')' || st.top() == '[' && s[i] == ']' || st.top() == '{' && s[i] == '}')
                st.pop();
            else
                st.push(s[i]);
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};
int main()
{
    int t;
    cout << "enter the testcase value" << endl;
    cin >> t;
    while (t--)
    {
        cout << "enter the string" << endl;
        string str;
        cin >> str;
        solve ob;
        bool ans = ob.func(str);
        if (ans == true)
            cout << "all Parenthesis are equal" << endl;
        else
            cout << "all Parenthesis are not equal" << endl;
    }
}
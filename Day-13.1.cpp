// Isomorphic Strings
#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    bool func(string s1, string s2)
    {
        int n1 = s1.length();
        int n2 = s2.length();
        if (n1 != n2)
            return false;
        int m1[256] = {0};
        int m2[256] = {0};
        for (int i = 0; i < n1; i++)
        {
            if (!m1[s1[i]] and !m2[s2[i]])
            {
                m1[s1[i]] = s2[i];
                m2[s2[i]] = s1[i];
            }
            else if (m1[s1[i]] != s2[i])
                return false;
        }
        return true;
    }
};
int main()
{
    int t;
    cout << "enter the testcase value" << endl;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cout << "enter the first input string" << endl;
        cin >> s1;
        cout << "enter the second input string" << endl;
        cin >> s2;
        solve ob;
        bool ans = ob.func(s1, s2);
        if (ans == true)
            cout << "strings are isomorphic" << endl;
        else
            cout << "strings are not isomorphic" << endl;
    }
}
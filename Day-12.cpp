#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    string func(string str)
    {
        string ans = "";
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == str[i + 1])
            {
                continue;
            }
            ans += str[i];
        }
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
        string str;
        cout << "enter the input string" << endl;
        cin >> str;
        solve ob;
        string ans = ob.func(str);
        cout << ans << endl;
    }
}
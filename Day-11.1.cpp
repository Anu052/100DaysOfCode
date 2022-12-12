#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
    int func(string s)
    {
        int open = 0, close = 0, ans = 0, fault = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ']')
            {
                close++;
                fault = close - open;
            }
            else
            {
                open++;
                if (fault > 0)
                {
                    ans += fault;
                    fault--;
                }
            }
        }
        return ans;
    }
};
int main()
{
    int t;
    cout << "enter the test-case value" << endl;
    cin >> t;
    while (t--)
    {
        string s;
        cout << "enter the input string" << endl;
        cin >> s;
        solve ob;
        int ans = ob.func(s);
        cout << ans << endl;
    }
}
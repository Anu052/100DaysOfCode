#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubStr(string str)
    {
        int count = 0;
        int x = 0, y = 0;
        for (int i = 0; i  < str.length(); i++)
        {
            if (str[i] == '0')
                x++;
            else
                y++;
            if (x == y)
                count++;
        }
        if (x != y)
            return -1;
        return count;
    }
};
int main()
{
    cout << "enter the test case  value" << endl;
    int t;
    cin >> t;
    while (t--)
    {
        cout << "enter the input string" << endl;
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.maxSubStr(str);
        cout << ans << endl;
    }
    return 0;
}
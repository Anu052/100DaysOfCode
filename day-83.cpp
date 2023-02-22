#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
    int minChar(string str)
    {
        int n = str.length();
        for (int i = 0; i < n; i++)
        {
            if (isPalindrome(str.substr(0, n - i)))
                return i;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int isDivisible(string s)
{
    int sum = 0, mul = 1, n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int num = 0;
        if (s[i] == '1')
            num = 1;
        sum = (sum + num * mul) % 3;
        mul = (mul * 2) % 3;
    }

    if (!sum)
        return 1;
    return 0;
}
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        isDivisible(s);
    }
}
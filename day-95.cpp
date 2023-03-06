#include <bits/stdc++.h>
using namespace std;
string smallestWindow(string s, string p)

{
    int count = 0;

    int mp[256] = {0};

    for (int i = 0; i < p.length(); i++)

    {

        if (mp[p[i]] == 0)
            count += 1;

        mp[p[i]]++;
    }

    int start = 0;

    int res = INT_MAX;

    int i = 0;

    int j = 0;

    while (j < s.length())

    {

        mp[s[j]]--;

        if (mp[s[j]] == 0)
            count--;

        if (count == 0)

        {

            while (count == 0)

            {

                if (j - i + 1 < res)

                {

                    res = j - i + 1;

                    start = i;
                }

                mp[s[i]]++;

                if (mp[s[i]] == 1)
                    count += 1;

                i += 1;
            }
        }

        j += 1;
    }

    if (res != INT_MAX)
        return s.substr(start, res);

    return "-1";
}
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        string s, p;
        cout << "enter the input strings" << endl;
        cin >> s >> p;
        smallestWindow(s, p);
    }
}
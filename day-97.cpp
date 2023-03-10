#include <bits/stdc++.h>
using namespace std;
vector<int> calculateSpan(int price[], int n)
{
    stack<pair<int, int>> s;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {

        if (s.empty())
            v.push_back(-1);

        else if (!s.empty() && s.top().first > price[i])

            v.push_back(s.top().second);

        else if (!s.empty() && s.top().first <= price[i])
        {

            while (!s.empty() && s.top().first <= price[i])
            {

                s.pop();
            }

            if (s.empty())
                v.push_back(-1);

            else
            {

                v.push_back(s.top().second);
            }
        }

        s.push({price[i], i});
    }

    for (int i = 0; i < v.size(); i++)
    {

        v[i] = i - v[i];
    }

    return v;
}
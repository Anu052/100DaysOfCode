#include <bits/stdc++.h>
using namespace std;
static bool comprator(string s1, string s2)
{
    string first = s1 + s2;
    string second = s2 + s1;
    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] > second[i])
        {
            return true;
        }
        else if (first[i] < second[i])
        {
            return false;
        }
    }
    return false;
}
string printLargest(vector<string> &arr)
{
    int n = arr.size();
    string str = "";
    sort(arr.begin(), arr.end(), comprator);
    for (int i = 0; i < n; i++)
    {
        str.append(arr[i]);
    }
    return str;
    // code here
}

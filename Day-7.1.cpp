#include<bits/stdc++.h>
using namespace std;
bool func(string s)
{
    string res=s;
    reverse(s.begin(),s.end());
    if(s==res)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(func(s)==true)
            cout<<"palindrome"<<endl;
        else
            cout<<"not palindrome"<<endl;
    }
}
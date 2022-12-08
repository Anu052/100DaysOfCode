#include<bits/stdc++.h>
using namespace std;
bool rotation(string s1,string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2)
        return false;
    else
    {
        string temp=s1+s1;
        if(temp.find(s2)!=string::npos)
        {
            return true;
        }
        else
        {
        return false;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cout<<"enter the first string input"<<endl;
        cin>>s1;
        cout<<"enter the second string input"<<endl;
        cin>>s2;
        if(rotation(s1,s2)==true)
            cout<<"Yes strings are rotation of each other"<<endl;
        else
            cout<<"No strings are rotation of each other"<<endl;
    
    }
}
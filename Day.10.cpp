#include<bits/stdc++.h>
using namespace std;
class solve
{
    public:
        int func(string s,char latter)
        {
        int n=s.length();
        int  count1=0;
        for(auto it: s)
        {
            if(it==latter)
            {
                count1++;
            }
        }
        return  count1*100/n;
        }
};
int main()
{
    int t;
    cout<<"enter the test case value"<<endl;
    cin>>t;
    while(t--)
    {
        string s;
        char latter;
        cout<<"enter the input string"<<endl;
        cin>>s;
        cout<<"enter the input character"<<endl;
        cin>>latter;
        solve ob;
        int ans=ob.func(s,latter);
        cout<<ans<<endl;
    }
}

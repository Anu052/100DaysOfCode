#include<bits/stdc++.h>
using namespace std;
class solve
{
    public:
        int single_element(int a[],int n)
        {
            int ans;
            unordered_map<int,int>mp;
            for(int i=0;i<n;i++)
            {
                mp[a[i]]++;
            }
             for(int i=0;i<n;i++)
            {
                if(mp[a[i]]==1)
                {
                   ans=a[i];
                }

            }
            return  ans;
        }

};
int main()
{
    cout<<"enter the test case"<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        cout<<"enter the size of array"<<endl;
        int n;
        cin>>n;
        int a[n];
        cout<<"enter the array elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solve ob;
        cout<<ob.single_element(a,n)<<endl;
    }
}
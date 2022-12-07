#include<bits/stdc++.h>
using namespace std;
class solve
{
    public:
        int  func(int arr[],int n)
        {
        int i;
        sort(arr,arr+n);
        int ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
               ans=arr[i];
            }
        }
        return ans;
        }
};
int main()
{
    cout<<"enter the test case"<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        cout<<"enter the size of first array"<<endl;
        int n;
        cin>>n;
        int a[n];
        cout<<"enter the array element"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    solve ob;
    cout<<ob.func(a,n)<<endl;
    }
}
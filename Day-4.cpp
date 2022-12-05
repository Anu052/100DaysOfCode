#include<bits/stdc++.h>
using namespace std;
class solve
{
    public:
        int so(int a[],int n,int k)
        {
            sort(a,a+n);
            return a[n-k];
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
        cout<<"enter the array elements"<<endl;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cout<<"enter the target"<<endl;
        cin>>k;
        solve sb;
        cout<<sb.so(a,n,k)<<endl;
    }
}
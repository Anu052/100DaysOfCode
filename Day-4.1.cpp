#include<bits/stdc++.h>
using namespace std;
class solve
{
    public:
        int smallest(int a[],int n,int k)
        {
            sort(a,a+n);
            return a[k-1];
        }
};
int main()
{
    int t;
    cout<<"enter the test case"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter the size of array"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter the array element"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cout<<"enter the target"<<endl;
        cin>>k;
        solve sb;
        cout<<sb.smallest(a,n,k)<<endl;
    }
}
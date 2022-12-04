#include<bits/stdc++.h>
using namespace std;
class solve
{
    public:    
       vector <int> common (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int>ans;
        int i=0,j=0,k=0;
        while(i<n1&&j<n2&&k<n3)
        {
            if(a[i]==b[j]&&b[j]==c[k])
            {
                ans.push_back(a[i]);
                i++;
                j++;
                k++;
         
            }
            else if(a[i]<b[j])
            {
                i++;
            }
            else if(b[j]<c[k])
            {
                j++;
            }
            else
                k++;
            int xx=a[i-1];
            while(a[i]==xx)
                i++;
            int yy=b[j-1];
            while(b[j]==yy)
                j++;
            int kk=c[k-1];
            while(c[k]==kk)
                k++;
        }
          return ans;  
        }

};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int a[n1];
        int b[n2];
        int c[n3];
        for(int i=0;i<n1;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n2;j++)
        {
            cin>>b[j];
        }
        for(int k=0;k<n3;k++)
        {
            cin>>c[k];
        }
        solve sb;
        vector<int>sum=sb.common(a,b,c,n1,n2,n3);
        if(sum.size()==0)
            return -1;
        for(int i=0;i<sum.size();i++)
        {
            cout<<sum[i]<<" ";
        }
        cout<<endl;
    }
}
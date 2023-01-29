#include<bits/stdc++.h>
using namespace std;

class Solution{

	public:

	int perfectSum(int arr[], int n, int sum)
	{
        int mod=1e9+7;
        int t[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=(t[i-1][j]+t[i-1][j-arr[i-1]])%mod;
                }
                else
                {
                    t[i][j]=t[i-1][j]%mod;
                }
            }
        }
        return t[n][sum]%mod;
	}

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,sum;
            cin>>n>>sum;
            int a[n];
            for(int i=0;i<n;i++)
            {
             cin>>a[i];
            }
        }
        Solution ob;
    }
	  
};
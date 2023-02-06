#include<bits/stdc++.h>
using namespace std;
 int dp[10001];
    int solve(int arr[], int n,int i){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int a = solve(arr,n,i+2)+arr[i];
        int b = solve(arr,n,i+1);
        
        return dp[i] = max(a,b);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        memset(dp,-1,sizeof(dp));
        return solve(arr,n,0);
        
    }
int main()
{
    int t;
    cout<<"enter the test case value"<<endl;
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
        FindMaxSum(a,n);
    }
}
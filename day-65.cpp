#include<bits/stdc++.h>
using namespace std;

    long long countWays(int n)
    {
        
        long long modulo = 1000000007;

        vector<long long int>dp(n+1);


        dp[0]=1;

        dp[1]=1;

        dp[2]=2;

        for(long long int i=3;i<=n;i++){

            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%modulo;

        }
        return dp[n];
        
    }
int main()
{
    int t;
    cout<<"enter the test case value"<<endl;
    cin>>t;
    while(t--)
    {
        long long n;
        cout<<"enter the input value"<<endl;
        cin>>n;
        countWays(n);
    }
}
   #include<bits/stdc++.h>
   using namespace std;
   vector<vector<int>> overlappedInterval(vector<vector<int>>& a) {
         // Code here
         sort(a.begin(),a.end());
         vector<vector<int>>ans;
         ans.push_back(a[0]);
         for(int i=1;i<a.size();i++)
         {
             if(ans.back()[1]>=a[i][0])
             {
                 ans.back()[1]=max(ans.back()[1],a[i][1]);
             }
             else
             {
                 ans.push_back(a[i]);
             }
         }
         return ans;
    }
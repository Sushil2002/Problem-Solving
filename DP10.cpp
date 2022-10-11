#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
int Path(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp)
{
    if(i==0 && j==0)
    {
        return nums[i][j];
    }
    if(i<0 || j<0)
    {
        return 1e9;  //IMPORTANT
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up=nums[i][j]+Path(i-1,j,nums,dp);
    int left=nums[i][j]+Path(i,j-1,nums,dp);
    
    return dp[i][j]=min(up,left);
}
signed main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n);
    vector<vector<int>>dp(n,vector<int>(m,-1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    int res=Path(n-1,m-1,v,dp);
    cout<<res<<endl;
    return 0;
}
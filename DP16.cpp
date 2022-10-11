#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
void solve(vector<vector<int>> &dp, int n, vector<int> &nums)
{
    int totalsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        totalsum += nums[i];
    }
    int k=totalsum;
    for (int i = 0; i < nums.size(); i++)
    {
        dp[i][0] = true;
    }
    if(nums[0]<=k) dp[0][nums[0]] = true;
    for (int i = 0; i < n; i++)
    {
        for (int target = 1; target <= k; target++)
        {
            bool notTake=dp[n-1][target];
            bool take=false;
            if(nums[n-1]<=target) take=dp[n-1][target-nums[n]];
            dp[n][target]=take|notTake;
        }
    }
}
signed main()
{
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    return 0;
}
// int tempr = 0;
    // while(tempr< r){
    //     int t = pow(2,tempr);
    //     for(int i = t ; i)
    // }
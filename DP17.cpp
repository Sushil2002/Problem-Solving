#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int f(int i, vector<int> &nums, int tar,vector<vector<int>>&dp)
{
    if (tar == 0) return 1;
    if (i == 0)
        return tar==nums[i];
    if(dp[i][tar]!=-1){
        return dp[i][tar];
    }
    int NotPick = f(i - 1, nums, tar,dp);
    int pick=0;
    if (nums[i] <= tar)
    {
        pick = f(i - 1, nums, tar - nums[i],dp);
    }
    return dp[i][tar]=NotPick + pick;
}
signed main()
{
    int n, tar;
    cin >> n >> tar;
    vector<int> nums(n);
    vector<vector<int>>dp(n+10,vector<int>(tar+1,-1));
    // IN test case five 0 are  to be consider to add them into number of subset then count the number of zero in vector and add 2^n n=number of zero in vector.
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ans=f(n-1,nums,tar,dp);
    cout<<ans<<endl;
    return 0;
}
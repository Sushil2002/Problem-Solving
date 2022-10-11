#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ll cnt = 0;

vector<vector<ll>> ans;
ll Solve(ll target, vector<ll> &nums, vector<vector<ll>> &dp,int i)
{

    if (target == 0)
    {
        return 1;
    }
    ll cnt = 0;
    if (dp[i][target] != -1)
    {
        return dp[i][target];
    }
    for (ll j = 0; j < nums.size(); j++)
    {
        if (target - nums[j] >= 0)
            cnt += Solve(target - nums[j], nums,dp,j);
        dp[j][target]=cnt%1000000007;
    }
    //return cnt;
    return dp[0][target]=cnt%1000000007;
}
signed main()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> nums(n);
    vector<ll> sub;
    vector<vector<ll>> dp(n,vector<ll>(t+10,-1));
    for (ll i = 0; i < n; i++)
    { 
        cin >> nums[i];
    }
    cout << Solve(t, nums,dp,0) << endl;
    // for (auto it : ans)
    // {
    //     for (auto ele : it)
    //     {
    //         cout << ele << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
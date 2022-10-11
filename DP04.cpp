#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Jump(vector<int> &nums, int ind, int k, vector<int> &dp)
{
    if (ind == 0)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int mini_step = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (ind - j >= 0)
        {
            int right = Jump(nums, ind - j, k, dp) + abs(nums[ind] - nums[ind - j]);
            mini_step=min(mini_step,right);
        }
    }
    return dp[ind] = mini_step;
}
signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n), dp(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int x=Jump(nums, n - 1, k, dp);
    cout << x << endl;
    return 0;
}
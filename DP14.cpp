#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int ans = 0;
bool Solve(int ind, int k, vector<int> &nums, vector<vector<int>> &dp)
{
    if (k == 0)
    {
        return true;
    }

    if (ind == 0)
    {
        if (nums[0] == k)
        {
            return 1;
        }
        return 0;
    }
    if (k < 0)
    {
        return 0;
    }
    if (dp[ind][k] != -1)
    {
        return dp[ind][k];
    }
    bool x1 = false;
    x1 = Solve(ind - 1, k - nums[ind], nums, dp);
    bool x2 = Solve(ind - 1, k, nums, dp);
    return dp[ind][k] = x1 | x2;
}
signed main()
{
    int t;
    cin >> t;
    while ((t--))
    {
        ans = 0;
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << Solve(n - 1, k, v, dp) << endl;
    }
    return 0;
}
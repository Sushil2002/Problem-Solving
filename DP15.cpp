#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool Solve(int i, int k, vector<int> &nums, vector<vector<int>> &dp)
{
    if (k == 0)
    {
        return true;
    }
    if (i == 0)
    {
        if (nums[0] == k)
        {
            return true;
        }
        return false;
    }
    if (dp[i][k] != -1)
    {
        return dp[i][k];
    }
    if (k < 0)
    {
        return false;
    }
    bool x = false;
    x = Solve(i - 1, k - nums[i], nums, dp);
    bool y = Solve(i - 1, k, nums, dp);
    return dp[i][k] = x | y;
}
signed main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
    if (sum % 2 == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        sum = sum / 2;
        cout << Solve(n - 1, sum, v, dp);
    }
    return 0;
}
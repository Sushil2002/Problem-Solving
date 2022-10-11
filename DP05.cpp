#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Sum(vector<int> &nums, int ind, vector<int> &dp)
{
    if (ind < 0)
    {
        return 0;
    }
    if (ind == 0)
    {
        return nums[ind];
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int right = nums[ind] + Sum(nums, ind - 2, dp);
    int left = Sum(nums, ind - 1, dp);
    return dp[ind] = max(left, right);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n), dp(n + 1, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int x = Sum(nums, n - 1, dp);
        cout << x << endl;
    }
    return 0;
}
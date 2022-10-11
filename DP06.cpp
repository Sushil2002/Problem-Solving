#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

ll Rob(vector<ll> &nums, ll ind, vector<ll> &dp)
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
    ll right = nums[ind] + Rob(nums, ind - 2, dp);
    ll left = Rob(nums, ind - 1, dp);
    return dp[ind] = max(right, left);
}
signed main()
{
    ll n;
    cin >> n;
    ll A[n];
    vector<ll> v1, v2;
    vector<ll> dp(n, -1);
    vector<ll>dp1(n,-1);
    for (ll i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (ll i = 1; i < n; i++)
    {
        v1.push_back(A[i]);
    }
    for (ll i = 0; i < n - 1; i++)
    {
        v2.push_back(A[i]);
    }
    ll x = Rob(v1, v1.size() - 1, dp);
    ll y = Rob(v2, v2.size() - 1, dp1);
    cout << max(x, y) << endl;
    return 0;
}

// // Frog Jump

// #include <bits/stdc++.h>
// #include <iostream>
// typedef long long ll;
// using namespace std;
// // ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

// // /------->**  Moving from last index to first index **<------------------//////////

// int Jump(vector<int> &nums, int ind, vector<int> &dp) // ind=0
// {
//     if (ind == 0)
//     {
//         return 0;
//     }
//     if (dp[ind] != -1)
//     {
//         return dp[ind];
//     }
//     // one step or 2 -step

//     int left = Jump(nums, ind - 1, dp) + abs(nums[ind] - nums[ind - 1]);
//     int right = INT_MAX;
//     if (ind >=2)
//     {
//         right = Jump(nums, ind - 2, dp) + abs(nums[ind] - nums[ind - 2]);
//     }
//     return dp[ind] = min(left, right);
// }
// signed main()
// {
//         int n;
//         cin >> n;
//         vector<int> nums(n), dp(n + 1, -1);
//         for (int ind = 0; ind < n; ind++)
//         {
//             cin >> nums[ind];
//         }
//         ll x = Jump(nums, n - 1, dp);
//         cout << x << endl;
//     return 0;
// }

///------->**  Moving from  zero  index to last index **<------------------//////////
// from left to right or vice versa cost of energy is the same!

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Jump(vector<int> &nums, int i, vector<int> &dp)
{
    if (i == nums.size() - 1)
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int left = Jump(nums, i + 1, dp) + abs(nums[i] - nums[i + 1]);
    int right = INT_MAX;
    if (i < nums.size() - 2)
    {
        right = Jump(nums, i + 2, dp) + abs(nums[i] - nums[i + 2]);
    }
    return dp[i] = min(left, right);
}
signed main()
{
    int n;
    cin >> n;
    vector<int> nums(n), dp(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int x = Jump(nums, 0, dp);
    cout << x << endl;
    return 0;
}
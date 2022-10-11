// #include <bits/stdc++.h>
// #include <iostream>
// typedef long long ll;
// using namespace std;
// // ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
// bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
// {
//     return a.second < b.second;
// }
// vector<ll> ans;
// void Coin(vector<ll> &nums, ll target, vector<ll> &sub, ll ind, ll &x)
// {
//     if (ind == nums.size())
//     {
//         if (target == 0)
//         {
//             x = sub.size();
//             ans.push_back(x);
//         }
//         return;
//     }
//     if (sub.size() >= x)
//     {
//         return;
//     }

//     if (nums[ind] <= target)
//     {
//         sub.push_back(nums[ind]);
//         Coin(nums, target - nums[ind], sub, ind, x);
//         sub.pop_back();
//     }
//     Coin(nums, target, sub, ind + 1, x);
// }
// signed main()
// {
//     ll n, tar;
//     cin >> n >> tar;
//     vector<ll> nums(n);
//     ll x = INT_MAX;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     sort(nums.begin(),nums.end());
//     reverse(nums.begin(),nums.end());
//     vector<ll> sub;
//     Coin(nums, tar, sub, 0, x);
//     sort(ans.begin(), ans.end());
//     if (ans.size() == 0)
//     {
//         cout << -1 << endl;
//         return 0;
//     }
//     cout << x << endl;
//     return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Solve(int n, vector<int> &nums, int sum)
{
    if (sum == 0)
    {
        return 1e9;
    }
    if (n < 0)
    {
        return 1e9;
    }
    int one = 1e9;
    int two = 1e9;
    if (nums[n] <= sum)
        one = min(1 + Solve(n, nums, sum - nums[n]), Solve(n-1, nums, sum));
    else    
        two = Solve(n - 1, nums, sum);
    return min(one, two);
}
signed main()
{
    int n,sum;
    cin>>n>>sum;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int x=Solve(n-1,nums,sum);
    cout<<x<<endl;
    return 0;
}
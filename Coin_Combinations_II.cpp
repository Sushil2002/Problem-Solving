// #include <bits/stdc++.h>
// #include <iostream>
// typedef long long ll;
// using namespace std;
// // ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
// bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
// {
//     return a.second < b.second;
// }
// int f(int i, int t, vector<int> &nums,vector<vector<int>>&dp)
// {

//     // if(t==0)return 1;
//     // if (i == 0)
//     //     return nums[0] == t;
//     if(i<0){
//         if(t==0)return 1;
//         return 0;
//     }
//     int Pick = 0, NotPick = 0;
//     if(dp[i][t]!=-1)return dp[i][t];
//     if (nums[i] <= t)
//     {
//         Pick = (f(i, t - nums[i], nums,dp));
//     }

//     NotPick = f(i - 1, t, nums,dp);
//     return dp[i][t]=Pick + NotPick;
// }
// signed main()
// {
//     int n, t;
//     cin >> n >> t;
//     vector<int> v(n);
//     vector<vector<int>>dp(n+10,vector<int>(n+10,-1));
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int ans = f(n - 1, t, v,dp);
//     cout << ans << endl;
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
signed main()
{
    int n, tar;
    cin >> n >> tar;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int A[tar+1]={0};
    
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Fab(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int prev = Fab(n - 1, dp);
    int prev_of_prev = Fab(n - 2, dp);
    return dp[n] = prev + prev_of_prev;
}
signed main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << Fab(n, dp) << endl;
    return 0;
}
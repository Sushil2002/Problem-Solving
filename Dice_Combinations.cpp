#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool ispalindrome(string str)
{
    ll len = str.length();
    for (ll i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
bool issort(ll A[], ll n)
{
    for (ll i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }
    return true;
}
ll climbstairs(ll n, vector<ll> &dp)
{
    if (n == 0)
    {
        return 1; // He successfully rich that place!
    }
    if (dp[n] != -1)
    {
        return dp[n]%(1000000007);
    }
    ll ans=0;
    // Using For Loop
    for (ll i = 1; i <= 6; i++)
    {
        if ((n - i) >= 0)
        {
            ans += climbstairs(n - i, dp);
            ans = ans % (1000000007);
        }
    }
    return dp[n]=ans % (1000000007);
}
signed main()
{
    ll n;
    cin >> n;
    vector<ll> dp(n + 10, -1);
    ll x = climbstairs(n, dp);
    cout << x << endl;
    return 0;
}

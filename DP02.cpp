
//Number of stairs.

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
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
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

int climbstairs(int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 1; // He successfully rich that place!
    }
    if(n<0){
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    //Using For Loop
    // for (int i = 1; i <= 2; i++)
    // {
    //     if ((n - i) >= 0)
    //     {
    //         dp[n] += climbstairs(n - i, dp);
    //     }
    // }
    int onestep = climbstairs(n - 1, dp);
    int twostep = climbstairs(n - 2, dp);
    return dp[n] = onestep + twostep;
}
signed main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << climbstairs(n, dp) << endl;
    return 0;
}

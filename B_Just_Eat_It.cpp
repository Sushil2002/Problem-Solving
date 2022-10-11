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
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll A[n];
        ll yass = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            yass += A[i];
        }
        ll sum = 0, best = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            sum = max(A[i], A[i] + sum);
            best = max(sum, best);
        }

        ll sum1 = 0, best1 = 0;
        for (ll i = 1; i < n ; i++)
        {
            sum1 = max(A[i], A[i] + sum1);
            best1 = max(sum1, best1);
        }
        ll x = max(best, best1);
        if (yass > x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
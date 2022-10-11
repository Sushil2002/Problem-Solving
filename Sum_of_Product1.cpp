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
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll A[n];
        ll p = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] == 1)
            {
                p++;
            }
        }
        if (p == n)
        {
            
            ll a = n*(n+1);
            ll b = a / 2;
            cout <<   b << endl;
        }
        else
        {
            ll cnt1 = 0;
            ll ans = 0;
            for (ll i = 0; i < n; i++)
            {
                if (A[i] == 1)
                {
                    cnt1++;
                }
                else if (A[i] == 0)
                {
                    ll x, y;
                    if (cnt1 % 2 == 0)
                    {
                        x = cnt1 / 2;
                        y = (cnt1 + 1);
                    }
                    else
                    {
                        x = ((cnt1 + 1)) / 2;
                        y = cnt1;
                    }
                    ans += (x * y);
                    cnt1 = 0;
                }
                if (i == n - 1)
                {
                    ll x, y;
                    if (cnt1 % 2 == 0)
                    {
                        x = cnt1 / 2;
                        y = (cnt1 + 1);
                    }
                    else
                    {
                        x = ((cnt1 + 1)) / 2;
                        y = cnt1;
                    }
                    ans += (x * y);
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
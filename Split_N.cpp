
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
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
void Solve()
{
    ll n;
    cin >> n;
    if (isPowerOfTwo(n))
    {
        cout << 0 << endl;
    }
    else
    {
        ll rll = log2(n);
        rll = pow(2, rll);
        rll = n % rll;
        ll res = 1;
        while ((ceil(log2(rll)) != floor(log2(rll))))
        {
            ll ans = log2(rll);
            ans = pow(2, ans);
            rll = rll % ans;
            res++;
        }
        cout << res << endl;
    }
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}
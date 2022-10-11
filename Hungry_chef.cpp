
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'x'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &x, const pair<ll, ll> &y)
{
    return x.second < y.second;
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
void Solve(ll x, ll y, ll n, ll r)
{
    ll y1 = (r / y);
    ll y2 = (r / x);
    if (n <= y1)
    {
        cout << 0 << " " << n << "\n";
    }
    else if (n > y2)
    {
        cout << -1 << "\n";
    }
    else
    {
        ll s1 = (r - (n * y));
        ll s2 = (x - y);
        ll ans = s1 / s2;
        if ((r - (y * n)) % (x - y) != 0)
        {
            ans++;
        }
        cout << ans << " " << n - ans << "\n";
    }
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, n, r;
        cin >> x >> y >> n >> r;
        Solve(x, y, n, r);
    }
    return 0;
}

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
void f()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    for (ll i = 1; i <= k; i++)
    {
        ll x = i % k;
        ll t = 0;
        for (ll j = 1; j <= n; j++)
        {
            int s = j % k;
            if (s == x)
            {
                t = max(t, v[j]);
            }
        }
        sum += t;
    }
    cout << sum << endl;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}
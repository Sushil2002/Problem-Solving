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
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt = 0;
    ll sum = 0;
    ll x=0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum <= t)
        {
            cnt++;
        }
        else
        {
            sum -= v[x];
            x++;
        }
    }
    cout << cnt << endl;

    return 0;
}
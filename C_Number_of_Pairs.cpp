#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
ll solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        auto it1 = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
        auto it2 = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin();
        // cout<<it1<<" "<<it2<<endl;
        ans += abs(it2 - it1);
    }
    return ans;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
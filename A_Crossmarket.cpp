#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
ll solve(ll n, ll m)
{
    ll a = min(n, m);
    ll cnt = 2 * a - 1;
    ll b = max(n, m);
    if (b > 1)
    {
        cnt++;
        cnt += b - 1;
    }
    
    return cnt;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = solve(n, m);
        ans--;
        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
ll power(ll x,  ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll MOD = 1000000007;
        ll ans=1;
        for(ll i=0;i<k;i++){
            ans=(ans*n)%MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}
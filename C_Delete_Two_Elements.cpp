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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> m;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            m[v[i]]++;
        }
        ll x = (2 * sum) / n;

        map<ll, ll> mp;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll ans = x - v[i];
            cnt+=mp[ans];
            mp[v[i]]++;
        }
        if (n == 1)
        {
            cnt = 0;
        }
        else
        {
            if (m.size() == 1)
            {
                cnt = (n * (n - 1)) / 2;
            }
        }
        if((2*sum)%n!=0){
            cnt=0;
        }
        cout << cnt << endl;
    }
    return 0;
}
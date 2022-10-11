#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h, m;
        cin >> n >> h >> m;
        vector<ll> v(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll hi, mi;
            cin >> hi >> mi;
            v[i] = hi * 60 + mi;
            mp[v[i]] = i;
        }
        ll sl = h * 60 + m;
        ll k = -1;
        auto it = mp.rbegin();
        if (sl > it->first)
        {
            k = -1;
        }
        else
        {
            auto j = mp.lower_bound(sl);
            k = j->second;
        }

        ll ans = 0;
        if (k == -1)
        {
            auto ele = mp.begin();
            ans = ele->first;
            ans += 1440 - sl;
        }
        else
        {
            ans = v[k] - sl;
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
}
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

    ll n = 3;
    ll ans = 0;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (v[0] == 0)
    {
        cout << (v[1] / 3) + (v[2] / 3);
        return 0;
    }
    else if (v[1] == 0)
    {
        cout << (v[0] / 3) + (v[2] / 3);
        return 0;
    }
    else if (v[2] == 0)
    {
        cout << (v[1] / 3) + (v[0] / 3);
        return 0;
    }
    else
    {
        ll ans1=0;
        ans1+=(v[0]/3);
        ans1+=(v[1]/3);
        ans1+=(v[2]/3);
        ans1+=min(v[0]%3,min(v[1]%3,v[2]%3));
        ll x = v[0];
        ll y = v[1];
        ll z = v[2];
        ll res = 0;
        if (z % 3 != 0)
        {
            res += z / 3;
            z = z % 3;
            v[2] = z;
            sort(v.begin(), v.end());
            res += v[0];
            v[1] = v[1] - v[0];
            v[2] = v[2] - v[0];
            if (v[1] >= 3)
            {
                res += (v[1] / 3);
            }
            if (v[2] >= 3)
            {
                res += (v[2] / 3);
            }
        }
        else
        {
            res += v[0];
            v[1] = v[1] - v[0];
            v[2] = v[2] - v[0];
            if (v[1] >= 3)
            {
                res += v[1] / 3;
            }
            if (v[2] >= 3)
            {
                res += v[2] / 3;
            }
        }
        cout << max(ans1,res) << endl;
    }

    return 0;
}
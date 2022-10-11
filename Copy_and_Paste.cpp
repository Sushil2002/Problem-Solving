#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
ll Solve()
{
    ll n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    ll cntone = 0;
    ll res = 1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cntone++;
        }
    }
    ll x = cntone * m;
    if (x % 2 == 1)
    {
        res = 0;
    }
    else if (cntone == 0)
    {
        res = n * m;
    }
    else
    {
        x = x / 2;
        x = x % cntone;
        if (x == 0)
        {
            x = cntone;
        }
        ll g = 0;
        ll ind = 0;
        // ll i = 0;
        for(int i=0;i<n;i++)
        {
            if (s[i] == '1')
            {
                g++;
            }
            if (g == x)
            {
                ind = i;
                break;
            }
            // i++;
        }
        ind++;
        ind = ind % n;
        while (s[ind] != '1')
        {
            res++;
            ind++;
            if (ind == n)
            {
                ind = 0;
            }
        }
    }
    return res;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout << Solve() << endl;
    }
    return 0;
}
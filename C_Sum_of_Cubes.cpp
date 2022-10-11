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
        ll x;
        cin >> x;
        set<ll> s;
        for (ll i = 1; i <= ceil(cbrt(x)); i++)
        {
            s.insert(i * i * i);
        }
        bool aj = false;
        for (auto it : s)
        {
            ll a = x - (it);
            auto ele = s.find(a);
            if (ele != s.end())
            {

                aj = true;
                break;
            }
        }
        if (aj)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout<<cbrt(34)<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, s;
        cin >> a >> s;
        vector<ll> v;
        bool aj = true;
        while (s)
        {
            ll x = a % 10;
            ll y = s % 10;
            if (y >= x)
            {
                v.push_back(y - x);
            }
            else
            {
                s = s / 10;
                y = y + 10 * (s % 10);
                if (y > x && y >= 10  && y<20)
                {
                    v.push_back(y - x);
                }
                else
                {
                    break;
                }
            }
            s = s / 10;
            a = a / 10;
        }
        if (a)
        {
            cout << -1 << endl;
        }
        else
        {
            ll x = 0;
            for (ll i = v.size() - 1; i >= 0; i--)
            {
                if (v[i] != 0)
                {
                    x = i;
                    break;
                }
            }
            for (ll i = x; i >= 0; i--)
            {
                cout << v[i];
            }
            cout << endl;
        }
    }
    return 0;
}
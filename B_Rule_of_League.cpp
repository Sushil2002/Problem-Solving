#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
void f(ll n, ll x, ll y)
{
    ll g = n - 1;
    ll v = max(x, y);
    if (x > 0 and y > 0)
    {
        cout << -1 << endl;
    }
    else if (x == 0 and y == 0)
    {
        cout << -1 << endl;
    }
    else
    {

        if (g % v == 0)
        {
            ll t = 1;
            ll ch = 1;
            int i=1;

            while(i<=g)
            {
                cout << t << " ";
                if (i % v == 0)
                {
                    if (ch == 0)
                    {
                        t += v;
                    }
                    else
                    {
                        t += v + 1;
                        ch = 0;
                    }
                }
                i++;
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        f(n, x, y);
    }
    return 0;
}
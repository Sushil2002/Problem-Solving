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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a * d) != (b * c))
        {

            ll y = max((b * c), (a * d));
            ll x = min((b * c), (a * d));
            if (x == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                if (y % x == 0)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
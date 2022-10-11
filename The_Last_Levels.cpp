#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (x <= 3)
        {
            cout << x * y << endl;
        }
        else
        {
            ll a = (x / 3) - 1;

            if (x % 3 == 0)
            {
                
                cout << (x * y) + (a*z) << endl;
            }
            else
            {
                a++;
                 cout << (x * y) + (a*z) << endl;
            }
        }
    }
    return 0;
}
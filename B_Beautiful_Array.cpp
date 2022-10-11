// Passed

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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        ll z = (n) * (k - 1) + b * k;
        if (b * k > s)
        {
            cout << -1 << endl;
        }
        else if (s > z)
        {
            cout << -1 << endl;
        }
        else if ((s / k) == b)
        {
            for (ll i = 0; i < n - 1; i++)
            {
                cout << 0 << " ";
            }
            cout << s << endl;
        }
        else if (b == 0 and s == 0)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
        else
        {
            ll a = k * b;
            a += (k - 1);
            if (a > s)
            {
                a = s;
            }
            s = s - a;
            cout << a << " ";
            ll i = 1;
            for (i = 1; i < n; i++)
            {

                s = s - (k - 1);
                if (s < 0)
                {
                    s += (k - 1);
                    cout << s << " ";
                    break;
                }
                cout << k - 1 << " ";
            }
            // cout<<i<<" km"<<endl;
            for (i; i < n - 1; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
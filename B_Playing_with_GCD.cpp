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
        vector<ll> a(n);
        for (ll i = 0; i < n ; i++)
        {
            cin >> a[i];
        }
        ll set = 0;
        for (ll i = 1; i < n - 1; i++)
        {
            ll p1 = a[i] * a[i - 1];
            ll p2 = a[i] * a[i + 1];
            ll l1 = p1/__gcd(a[i], a[i-1]);
            ll l2 =p2/ __gcd(a[i], a[i+1]);
            if ((__gcd(l1, l2) != a[i]))
            {
                set = 1;
                break;
            }
        }
        if (set)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
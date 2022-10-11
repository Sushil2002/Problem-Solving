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
        ll sum = 0;
        vector<ll> x, y;
        ll lx = 0, rx = 0, ty = 0, by = 0;
        while (n--)
        {
            ll left, right;
            cin >> left >> right;
            if (right < 0)
            {
                by = min(right, by);
            }
            else
            {
                ty = max(right, ty);
            }
            if (left < 0)
            {
                lx = min(left, lx);
            }
            else
            {
                rx = max(left, rx);
            }
        }
        sum = abs(lx) + abs(rx) + abs(ty) + abs(by);
        cout << sum * 2 << endl;
    }
    return 0;
}
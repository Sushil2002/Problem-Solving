#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void solve(ll a, ll b, ll f, ll s)
{

    if ((a + b) >= (f + s))
    {
        if (min(a, b) >= s)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, f, s;
        cin >> a >> b >> f >> s;
        solve(a, b, f, s);
    }
    return 0;
}
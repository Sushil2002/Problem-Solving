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
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll maxi = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += v[i];
    }
    if (sum < 2 * maxi || sum % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
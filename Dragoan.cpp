#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll k, n;
    cin >> k >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        if (k <= v[i].first)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            k += v[i].second;
        }
    }
    cout << "YES";
}
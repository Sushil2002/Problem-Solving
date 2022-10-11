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
        ll A[n];
        map<ll, ll> mp;
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        ll ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s.find(A[i]) == s.end())
            {
                ans++;
                s.insert({A[i]});
            }
            else
            {
                break;
            }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
signed main()
{
    ll n, k;
    cin >> n >> k;

    set<ll> s;
    for (ll i = 1; i <= sqrt(n)/*i*i<n*/; i++)
    {
        if (n % i == 0)
        {
            s.insert({i});
            s.insert({n / i});
        }
    }
    if (s.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        ll cnt = 0;
        for (auto it : s)
        {
            if (cnt == k - 1)
            {
                cout << it << endl;
                break;
            }
            else
            {
                cnt++;
            }
        }
    }

    return 0;
}
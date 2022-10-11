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
        ll x;
        cin >> x;
        ll A[4];
        for (ll i = 1; i <= 3; i++)
        {
            cin >> A[i];
        }
        bool aj = false;
        for (ll i = 1; i <= 2; i++)
        {
            x = A[x];
            if (x == 0)
            {
                aj = true;
                break;
            }
        }
        if (!aj)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
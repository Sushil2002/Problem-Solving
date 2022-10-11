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
        ll n;
        cin >> n;
        ll A[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        bool aj = true;
        ll sum = 0;
        ll cnt = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (A[i] != 0)
            {
                aj = false;
            }
            sum += A[i];
            if (!aj && A[i] == 0)
            {
                cnt++;
            }
        }
        cout << sum + cnt << endl;
    }
    return 0;
}
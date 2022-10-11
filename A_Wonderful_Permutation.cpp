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
        ll n, k;
        cin >> n >> k;
        ll A[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        if (k >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            ll cnt = 0;
            
            for (ll i = 0; i < k; i++)
            {
               if(A[i]>k){
                cnt++;
               }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
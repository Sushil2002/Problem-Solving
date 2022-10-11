#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
        cin >> n;
        vector<ll> v;
        ll counte = 0, counto = 0;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a % 2 == 0)
                counte++;
            else
                counto++;
            v.push_back(a);
        }
        // int cnt = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if ((v[i] + v[i + 1]) % 2 != 0)
        //     {
        //         cnt++;
        //     }
        // }
        // if(counte==n){
        //     cout<<0<<endl;
        // }
        // else if(counto==n){
        //     cout<<0<<endl;
        // }else{
        // if (cnt % 2 != 0)
        // {
        //     cnt = cnt / 2 + 1;
        // }
        // else
        // {
        //     cout << cnt / 2 << endl;
        // }
        // }
        cout<<min(counte,counto)<<endl;
        // cout<<cnt/2<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
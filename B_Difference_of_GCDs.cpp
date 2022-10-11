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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> v;
        v.push_back(l);
        bool aj = true;
        for (ll i = 2; i <= n; i++)
        {
            if((l%i)==0){
                v.push_back(l);
            }else{
                ll j=(l/i);
                j=(j+1)*i;
                if(j<=r){
                    v.push_back(j);
                }else{
                    aj=false;
                    break;
                }
            }
        }
        if (aj)
        {
            cout << "YES" << endl;
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
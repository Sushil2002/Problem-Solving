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
    map<ll, ll> mp;
    bool aj = true;
    int fifty=0,twofive=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 25)
        {
            twofive++;
        }
        else if (v[i] == 50)
        {
            if(twofive>=1){
                fifty++;
                twofive--;
            }else{
                aj=false;
                break;
            }
        }
        else
        {
            
            // cout << "x" << x << endl;
            // cout << "x" << y << endl;
            if (fifty >= 1 and twofive >= 1)
            {
                fifty--;
                twofive--;
            }
            else if (fifty == 0 and twofive >= 3)
            {
                twofive-=3;
            }
            else
            {
                aj = false;
                break;
            }
        }
    }
    
    // map<ll, ll> mp;
    // mp.insert({25, 1});
    
    if (aj)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
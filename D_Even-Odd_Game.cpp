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
        vector<ll> v(n);
        ll even = 0, odd = 0;
        ll e = 0, o = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even++;
                e += v[i];
            }
            else
            {
                odd++;
                o += v[i];
            }
        }
        ll res=0;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(ll i=0;i<n;i++){
            if(i%2==0){  //Alice start the Game!
                if(v[i]%2==0){
                    res+=v[i];
                }
            }else{
                if(v[i]%2==1){
                    res-=v[i];
                }
            }
        }
        if(res==0){
            cout<<"Tie"<<endl;
        }else if(res>0){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
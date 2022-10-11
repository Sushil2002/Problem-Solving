#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    ll ans = 1, counts = 0;
    for(ll i=0;i<n;i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i]={x,y};
    }
    sort(v.begin(), v.end(),sortby);
    ll current=v[0].second;
    for(ll i=1;i<n;i++){
        if(v[i].first>=current){
            ans++;
            current=v[i].second;
        }
    }
    cout<<ans<<endl;
    return 0;
}
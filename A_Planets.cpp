#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
signed main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        ll cnt1=0,cnt2=0;
        for(auto it:mp){
            cnt1+=min(c,it.second);
        }
        cout<<cnt1<<endl;
    }
    return 0;
}
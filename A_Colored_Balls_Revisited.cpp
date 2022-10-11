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
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll k=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll maxi=INT_MIN;
        for(ll i=0;i<n;i++){
            if(v[i]>maxi){
                maxi=v[i];
                k=i;
            }
        }
        cout<<k+1<<endl;
    }
    return 0;
}
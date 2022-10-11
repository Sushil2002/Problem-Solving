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
    ll cnt=0;
    while(t--){
        ll p,q;
        cin>>p>>q;
        if(q-p>=2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
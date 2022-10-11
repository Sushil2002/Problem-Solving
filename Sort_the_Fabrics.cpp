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
    for(ll i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": ";
        ll x;
        cin>>x;
        vector<string>n;
        vector<ll>d;
        vector<ll>u;
        vector<pair<string,ll>>n1;
        vector<pair<ll,ll>>d1;
        while(x--){
            string s;
            ll a,b;
            cin>>s;
            cin>>a>>b;
            n.push_back(s);
            d.push_back(a);
            u.push_back(b);
            n1.push_back({s,b});
            d1.push_back({a,b});
        }
        sort(n1.begin(),n1.end());
        sort(d1.begin(),d1.end());
        ll cnt=0;
        for(ll i=0;i<n1.size();i++){
            if(n1[i].second==d1[i].second){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
signed main(){
   ll n,h;
   cin>>n>>h;
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   ll cnt=0;
   for(ll i=0;i<n;i++){
    if(v[i]>h){
        cnt+=2;
    }else{
        cnt++;
    }
   }
   cout<<cnt<<endl;
    return 0;
}
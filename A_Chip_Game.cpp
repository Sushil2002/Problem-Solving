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
        ll n,m;
        cin>>n>>m;
        if(n%2==1 && m%2==1){
            cout<<"Tonya"<<endl;
        }else if(n%2==0 && m%2==0){
            cout<<"Tonya"<<endl;
        }else{
            cout<<"Burenka"<<endl;
        }
    }
    return 0;
}
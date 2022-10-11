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
        if(n%2==1)
        {
            cout<<1<<" ";
            for(ll i=2;i<=n;i++)
            {
                if(i%2==0){
                    cout<<i+1<<" ";
                }else{
                    cout<<i-1<<" ";
                }
            }
        }else{
            for(ll i=1;i<=n;i++)
            {
                if(i%2==0){
                    cout<<i-1<<" ";
                }else{
                    cout<<i+1<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
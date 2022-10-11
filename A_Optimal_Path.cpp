#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        // for(ll i=1;i<=n;i++){
        //     for(ll j=1;j<=m;j++){
        //         A[i][j]=(i-1)*m+j;
        //     }
        // }
        
        ll ans=0;
        for(ll i=2;i<=n;i++){
            ans+=i*m;
        }
        for(ll i=1;i<=m;i++){
            ans+=i;
        }
        // cout<<"ans1:"<<ans<<endl;
        
        cout<<ans<<endl;
    }
    return 0;
}
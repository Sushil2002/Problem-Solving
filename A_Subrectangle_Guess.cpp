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
        ll A[n][m];
        
        ll a=0,b=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>A[i][j];
            }
        }
        ll ans=A[0][0];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(A[i][j]>ans){
                    ans=A[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        // cout<<"a:"<<a<<" b:"<<b<<endl;
        ll j=max(a+1,n-a);
        ll k=max(b+1,m-b);
        // cout<<"j:"<<j<<" k:"<<k<<endl;
        cout<<j*k<<endl;
    }
    return 0;
}
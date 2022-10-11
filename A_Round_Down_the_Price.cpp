#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void solve(ll n)
{
    if(n<10){
        cout<<n-1<<endl;
    }else{
        ll x=10;
        while(x<=n){
            x=x*10;
        }
        // cout<<"X:"<<x<<endl;
        ll a=x/10;
        cout<<n-a<<endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
    solve(n);}
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll k,n,w;
    cin>>k>>n>>w;
    ll a=w*(w+1)/2;
    ll b=a*k;
    ll ans=b-n;
    if(ans>0){
        cout<<ans<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
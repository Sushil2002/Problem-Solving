#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll x=n-(m-1);
    ll max=x*(x-1)/2;
    ll z=0,min=0;
    if(n%m==0){
        z=n/m;
        ll a=z*(z-1)/2;
        min=a*m;
    }else{
        ll c=n%m;
        ll s=m-c;  //constant team
        ll d=n/m;
        ll q=d*(d-1)/2*s;
        ll h=d+1;
        ll b=h*(h-1)/2;
        ll d2=b*c;
        min=q+d2;
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
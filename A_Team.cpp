#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    ll cnt=0;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if((x==1 && y==1) ||(x==1 && z==1)||(y==1 && z==1)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll cnt=(n-1)*2;
        cnt+=min(x-1,y-1);
        cnt+=min(x-1,n-y);
        cnt+=min(n-x,y-1);
        cnt+=min(n-x,n-y);
        
        cout<<cnt<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll x;
    cin>>x;
    ll ans=0;
    ans=x/5;
    if(x%5!=0){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
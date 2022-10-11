#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2!=0){
            cout<<(n+1)/2-(n+1)<<endl;
        }else{
            cout<<n/2<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
#define MOD 1000000007;
using namespace std;
int main(){
    ll n;
    cin>>n;
    
    ll x=1;
    for(int i=0;i<n;i++){
        x*=2;
        x=x%MOD;
    }
    cout<<x<<endl;
    return 0;
}
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
        vector<ll>v;
        ll i=1,z=2;
        ll sum=0;
        while(true){
            z=pow(2,i);
            if(z>n){
                break;
            }
            v.push_back(z);
            i++;
        }
        for(ll i=0;i<v.size();i++){
            sum+=v[i]/2-1;
        }
        cout<<sum+(n-v[v.size()-1])<<endl;
    }
    return 0;
}
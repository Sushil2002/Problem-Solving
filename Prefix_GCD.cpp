#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll P[n];
        for(ll i=0;i<n;i++){
            cin>>P[i];
        }
        bool flag=true;
        for(ll i=0;i<n-1;i++){
            if(P[i]%P[i+1]!=0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    // for(ll i=0;i<n;i++)
    //    cout<<v[i]<<" ";
    cout<<endl;
    ll ans=0;
    ll i=0,j=n-1;
    while(i<=j){
        // if(v[i]+v[i+1]<=x){
        //     ans++;
        //     i+=2;
        // }else{
        //     ans++;
        //     i++;
        // }
        if(v[i]+v[j]<=x){
            ans++;
            i++;j--;
        }else{
            j--;
            ans++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll cnt1=0;
        ll cnt2=0;
        ll n;
        cin>>n;
        ll A[n];
        for(ll i=0;i<n;i++){
            cin>>A[i];
            if(A[i]==1){cnt1++;}
            if(A[i]==2){cnt2++;}
        }
        ll res=0;
        for(ll i=1;i<=cnt1;i++)
        {
            res+=(n-i);
        }
        ll z=cnt2*(cnt2-1)/2;
        cout<<res+z<<endl;
    }
    return 0;
}
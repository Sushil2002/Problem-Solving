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
        ll A[n];
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n);
        ll x=A[0];
        ll sum=0;
        for(ll i=1;i<n;i++){
            if(A[i]==x){
                continue;
            }else{
                sum+=A[i]-x;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
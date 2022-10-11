#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll A[n];
    map<int,int>m;
    for(ll i=0;i<n;i++){
        cin>>A[i];
        m[A[i]]++;
    }
    sort(A,A+n);
    cout<<A[n-1]-A[0]<<" ";
    ll x=A[0];
    ll y=A[n-1];
    ll s=0,g=0;
    for(ll i=0;i<n;i++){
        if(A[i]==x){
            s++;
        }
        if(A[i]==y){
            g++;
        }
    }
    if(s==n){
        cout<<n*(n-1)/2<<endl;
    }else
        cout<<s*g<<endl;
    return 0;
}
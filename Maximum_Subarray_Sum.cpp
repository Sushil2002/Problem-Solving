#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll A[n];
    for(ll i=0;i<n;i++){
        cin>>A[i];
    }
    ll sum=0,best=0;
    for(ll i=0;i<n;i++){
        sum=max(A[i],sum+A[i]);
        best=max(sum,best);
    }
    // cout<<best<<endl;
    if(best==0){
        sort(A,A+n);
        cout<<A[n-1]<<endl;
    }else{
        cout<<best<<endl;
    }
    return 0;
}
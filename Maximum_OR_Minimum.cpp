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
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]==0){
                cnt0++;
            }else{
                cnt1++;
            }
        }
        if(cnt0==n){
            cout<<0<<endl;
        }else if(cnt1==0){
            cout<<1<<endl;
        }else if(cnt1>cnt0){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}
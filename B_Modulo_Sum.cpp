#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    int A[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        sum+=A[i];
    }
    sort(A,A+n);
    bool flag=true;
    if(sum%m==0){cout<<"YES"<<endl;}
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
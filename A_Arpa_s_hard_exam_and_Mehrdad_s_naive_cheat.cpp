#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    int A[]={6,8,4,2};
    if(n==0){
        cout<<1<<endl;
    }else
        cout<<A[n%4]<<endl;
    
    return 0;
}
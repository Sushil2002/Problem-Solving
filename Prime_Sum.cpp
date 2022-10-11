#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll A,B;
        cin>>A>>B;
        int z=__gcd(A,B);
        if(A==1 || B==1){
            cout<<-1<<endl;
        }
        else if(z==1){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}
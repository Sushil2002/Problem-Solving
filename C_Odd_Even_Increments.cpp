#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int vuale(ll n){
    if(n%2==0){
        return n/2;
    }else{
        return n/2+1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int z=vuale(n);
        int A[n];
        int odd_index=0,even_index=0;
        int even=0,odd=0;
        for(int i=1;i<n+1;i++){
            cin>>A[i];
            if(i%2!=0){
                if(A[i]%2==0){
                    even++;
                }else{
                    odd++;
                }
            }else{
                if(A[i]%2==0){
                    even_index++;
                }else{
                    odd_index++;
                }
            }
        }
        if((z==even && n-z==odd_index)||(z==odd && n-z==even_index)){
            cout<<"YES"<<endl;
        }
        else if((odd+odd_index==n)||(even+even_index==n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
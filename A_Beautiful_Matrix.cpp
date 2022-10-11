#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll A[5+1][5+1];
    ll x,y;
    for(ll i=1;i<6;i++){
        for(ll j=1;j<6;j++){
            cin>>A[i][j];
            if(A[i][j]==1){
                x=i;y=j;
            }
        }
    }
    int ans=0;
    if(x<3){
        ans+=3-x;
    }else{
        ans+=x-3;
    }
    if(y!=3){
        ans+=abs(3-y);
    }
    cout<<ans<<endl;
    return 0;
}
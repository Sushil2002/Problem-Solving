#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
#define MOD 1000000007;
using namespace std;
int main(){
    ll x,y;
    cin>>x>>y;
    ll n;
    cin>>n;
    ll z=y-x;
    ll res=0;
    int x1=1000000000;
    if(n%3==0)
    {
        ll a=n/3;
        if(n%2==0){
            res=-z;
        }else{
            res=z;
        }
    }else if(n%3==2){
        if(n%2==1){
            res=-y;
        }else{
            res=y;
        }
    }else{
        if(n%2==0){
            res=-x;
        }else{
            res=x;
        }
    }
    if(res>0){
        cout<<res%1000000007<<endl;
    }else{
        ll max=res+1000000007;
        if(max<1000000007 && max<0){
            max+=2*1000000007;
        }
        cout<<max%1000000007<<endl;
    }
    return 0;
}
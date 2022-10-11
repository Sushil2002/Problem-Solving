#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a>=x && b>=y){
            cout<<"YES"<<endl;
        }
        else if(a>=x && y>b)
        {
            if(b+c>=y){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else if(b>=y && x>a){
            if(a+c>=x){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            ll n=x-a;
            ll m=y-b;
            if((n+m)<=c){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
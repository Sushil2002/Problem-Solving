#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<0<<" "<<0<<endl;
        }
        else if(x==y)
        {
            cout<<3<<" "<<1<<endl;
        }else{
            if(y%x!=0){
                cout<<0<< " "<<0<<endl;
            }else{
                cout<<1<<" "<<y/x<<endl;
            }
        }
    }
    return 0;
}
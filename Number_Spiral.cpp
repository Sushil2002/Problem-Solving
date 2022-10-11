#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>y>>x;
        if(y>x)
        {
            if(y%2==0)
            {
                ll z=y*y;
                cout<<z-x+1<<endl;
            }else{
                ll z=(y-1)*(y-1)+1;
                cout<<z+x-1<<endl;
            }
        }else{
            if(x%2==0)
            {   
                 ll z=(x-1)*(x-1)+1;
                cout<<z+y-1<<endl;
                  
            }else{
             ll z=x*x;
                cout<<z+1-y<<endl;
            }
        }
    }
    return 0;
}
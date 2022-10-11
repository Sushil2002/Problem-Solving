#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    if(m%n!=0){
        cout<<-1<<endl;
    }else if(n==m){
        cout<<0<<endl;
    }else{
        ll d=(m/n);
        
        while(d)
        {
            if(d%2==0){
                d=d/2;
                ans++;
            }else if(d%3==0)
            {
                d=d/3;
                ans++;
            }else{
                if(d%2!=0 && d%3!=0 && d!=1){
                    ans=0;
                }
                break;
            }
        }
    if(ans!=0){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
    }
    return 0;
}
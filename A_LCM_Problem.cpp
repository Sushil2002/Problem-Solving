#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x=a;
        ll y=2*a;
        if(x>a || y>b){
            cout<<-1<<" "<<-1<<endl;
        }else{
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
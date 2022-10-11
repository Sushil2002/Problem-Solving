#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,l;
        cin>>n>>m>>l;
        ll b=n+l-1;//Number of Bucket to Last Friends
        if(n==0){
            cout<<m<<endl;
        }
        else if(m%b < l){
            cout<<m%b<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
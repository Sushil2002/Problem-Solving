#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll l,r;
    cin>>l>>r;
    vector<ll>v;
    ll max=0,n=0;
    ll i=l,j=r;
    while(max<r-i)
    { 
        if((__gcd(i,j))==1)
        {
            n=j-i;
            if(n>max){max=n;}
            i++;
            j=r;
        }
        else if((j-i)<=max){
            j=r;
            i++;
        }
        else{
            j--;
        }
        
    }
    cout<<max<<endl;
    return 0;
}
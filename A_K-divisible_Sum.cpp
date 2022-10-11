#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
       if(n==k){
            cout<<1<<endl;
        }else if(k>n){
            if(k%n==0){
                cout<<k/n<<endl;
            }else{
                cout<<(k/n)+1<<endl;
            }
        }else{
            int x;
            if(n%k==0){
                x=n/k;
                x=x*k;
            }else{
                x=n/k+1;
                x=x*k;
            }
            if(x%n==0){
                cout<<x/n<<endl;
            }else{
                cout<<(x/n)+1<<endl;
            }
        }
    }
    return 0;
}
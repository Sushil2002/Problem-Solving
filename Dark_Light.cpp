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
        if(k==0){
            if(n%4==0){
                cout<<"Off"<<endl;
            }else{
                cout<<"On"<<endl;
            }
        }else{
            if(n==0){
                cout<<"On"<<endl;
            }else if(n%4==0){
                cout<<"On"<<endl;
            }else{
                cout<<"Ambiguous"<<endl;
            }
        }
    }
    return 0;
}
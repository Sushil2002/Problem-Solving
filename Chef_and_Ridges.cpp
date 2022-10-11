#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll x=0;
        ll y=pow(2,n);
        for(int i=1;i<=n;i++)
        {
            if(i==1){
                x=1;
            }else if(i%2!=0){
                x=x*2+1;
            }
            else{
                x=x*2-1;
            }
        }
        cout<<x<<" "<<y<<" ";
    }
    return 0;
}
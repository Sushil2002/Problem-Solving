#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==1){
            if(m==1){
                cout<<0<<endl;
            }else if(m==2){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
        else if(m==1){
            if(n==1){
                cout<<0<<endl;
            }else if(n==2){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            
            if((n%2==0 && m%2==0) || (n%2!=0 && m%2!=0)  )
            {
                if(n>m)
                {
                    int r=(m-1);
                    int d=(m-1);
                    int z=2*(n-m);
                    cout<<r+d+z<<endl;
                }
                else{
                    int r=(n-1);
                    int d=(n-1);
                    int z=2*(m-n);
                    cout<<r+d+z<<endl;
                }
            }
            else{
                if(n>m){
                    int r=2*(m-1);
                    int z=2*(n-m)-1;
                    cout<<r+z<<endl;
                } else{
                    int r=2*(n-1);
                    int z=2*(m-n)-1;
                    cout<<r+z<<endl;
                } 
            }
        }
    }
    return 0;
}
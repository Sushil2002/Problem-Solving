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
        int cnt=0;
            if(n%10==0){
                cout<<n/10<<endl;
            }
            else{
                int x=n/10;
                int y=n%10;
                if(n%5==0){
                    x=x+y/5;
                    cout<<x<<endl;
                }else{
                    cout<<-1<<endl;
                }
            }
        
    }
    return 0;
}
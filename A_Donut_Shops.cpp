#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>c){
            cout<<-1;
        }else{
            cout<<1;
        }
        if(b*c>a){
            cout<<" " <<b;
        }else{
            cout<<" " <<-1;
        }
        cout<<endl;
    }
    return 0;
}
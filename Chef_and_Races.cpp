#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int cnt=0;
        if(x!=a && x!=b){
            cnt++;
        }
        if(y!=a && y!=b){
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
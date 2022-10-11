#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<int,int>&a,const pair<int,int>&b){
    return a.second<b.second;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x=(k)/(n-1);
        int z=(x+k);
        if(z%n==0){
            z--;
            cout<<z<<endl;
        }else{
            cout<<z<<endl;
        }
    }
    return 0;
}
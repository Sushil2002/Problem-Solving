#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%4==0)
        {
            cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
        }
        else if(n%2==0)
        {
            cout<<2<<" "<<(n/2)-1<<" "<<(n/2)-1<<endl;
        }
        else{
            cout<<1<<" "<<(n/2)<<" "<<(n/2)<<endl;
        }
    }
    return 0;
}
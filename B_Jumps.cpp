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
        int x;
        cin>>x;
        int ans=0;
        while((ans*(ans+1))/2 < x){
            ans++;
        }
        if((ans*(ans+1))/2 ==x+1){
            cout<<ans+1<<endl;
        }else
            cout<<ans<<endl;
    }
    return 0;
}
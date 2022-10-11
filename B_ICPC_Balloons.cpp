#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int ans=0;
        for(auto it:m){
            if(it.second==1){
                ans+=2;
            }else{
                ans+=(it.second)+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
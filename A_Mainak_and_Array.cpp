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
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        // int mini=INT_MAX;
        // for(auto it:mp){
        //     if(it.second==1){
        //         mini=min(mini,it.first);
        //     }
        // }
        // int maxi=INT_MIN;
        // for(auto it:mp){
        //     if(it.second==1){
        //         maxi=max(maxi,it.first);
        //     }
        // }
        // cout<<maxi-mini<<endl;
        sort(v.begin(),v.end());
        cout<<v[n-1]-v[0]<<endl;
    }
    return 0;
}
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
        cout<<n<<endl;
        vector<ll>v;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
            v.push_back(i);
        }
        cout<<endl;
        for(int i=0;i<v.size()-1;i++){
            swap(v[i],v[v.size()-1]);
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
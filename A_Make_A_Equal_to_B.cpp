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
        cin>>n;;
        vector<int>v1(n),v2(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            cin>>v2[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                cnt++;
            }
        }
        int scnt=0;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                scnt++;
            }
        }
        cout<<min(cnt,scnt+1)<<endl;
    }
    return 0;
}
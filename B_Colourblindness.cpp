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
        string s1,s2;
        cin>>s1>>s2;
        bool aj=true;
        for(int i=0;i<n;){
            if(s1[i]==s2[i]){
                i++;
            }else if(s1[i]=='G' and s2[i]=='B'){
                i++;
            }else if(s1[i]=='B' and s2[i]=='G'){
                i++;
            }else{
                aj=false;
                break;
            }
        }
        if(aj){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
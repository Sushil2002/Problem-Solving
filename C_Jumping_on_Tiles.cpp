#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        
            vector<pair<char,int>>v;
            char str=max(s[0],s[n-1]);
            char m=min(s[0],s[n-1]);
            for(int i=0;i<n;i++){           
                if(m<=s[i] && s[i]<=str)
                    v.push_back({s[i],i+1});
            }
            if(s[0]>s[n-1]){
                sort(v.begin(),v.end(),sortby);
            }else{
                sort(v.begin(),v.end());
            }
            int e=abs((s[0]-97)-(s[n-1]-97));
            cout<<e<<" "<<v.size()<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i].second<<" ";
            }
            cout<<endl;
        
    }
    return 0;
}
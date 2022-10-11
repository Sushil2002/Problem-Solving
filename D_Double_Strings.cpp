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
    while(t--)
    {
        int n;
        cin>>n;
        multimap<string,int>m;
        int v[n];
        for(int i=0;i<n;i++){
            string x;
            cin>>x;
            m.insert({x,i});
        }
        for(auto it:m){
            string s;
            int flag=1;
            for(int i=0;i<it.first.length();i++){
                s.push_back(it.first[i]);
                if(m.find(s)!=m.end()){
                    if(m.find(it.first.substr(i+1))!=m.end()){
                        v[it.second]=1;
                        flag=0;
                    }
                }
            }
            if(flag){
                v[it.second]=0;
            }
        }
        for(auto it:v){
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}
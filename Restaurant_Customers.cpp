#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,char>>v;
    while(n--){
        int x,y;
        cin>>x>>y;
        v.push_back({x,'A'});
        v.push_back({y,'L'});
    }
    sort(v.begin(),v.end());
    ll ans=0,res=0;
    for(int i=0;i<v.size();i++){
        if(v[i].second=='A'){
            ans++;
            if(ans>res){
                res=ans;
            }
        }else{
            ans--;
        }
    }
    cout<<res<<endl;
    return 0;
}
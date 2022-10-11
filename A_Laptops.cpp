#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>v;
    bool aj=false;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        // v.push_back({a,b});
        if(a!=b){
            aj=true;
            break;
        }
    }
    // if(!aj){
    //     cout
    // }
    // sort(v.begin(),v.end());
    // bool aj=false;
    // for(int i=0;i<n-1;i++){
    //     if(v[i].first==v[i].second){
    //         aj=true;
    //     }
    // }
    if(aj){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}
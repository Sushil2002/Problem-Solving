#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
int main(){
    ll n;
    cin>>n;
    vector<ll>v1(n);
    vector<ll>v2(n-1);
    vector<ll>v3(n-2);
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        cin>>v1[i];
    }
    for(ll i=0;i<n-1;i++){
        cin>>v2[i];
    }
    for(ll i=0;i<n-2;i++){
        cin>>v3[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    for(ll i=0;i<n;){
        if(v1[i]==v2[i]){
            i++;
        }else{
            ans.push_back(v1[i]);
            break;
        }
    }
    for(ll i=0;i<n-1;){
        if(v2[i]==v3[i]){
            i++;
        }else{
            ans.push_back(v2[i]);
            break;
        }
    }
    for(auto &it:ans){
        cout<<it<<endl;
    }
    return 0;
}
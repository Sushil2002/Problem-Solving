#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    map<char,ll>m;
    vector<map<char,ll>>v(n);

    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            v[s[i]];
        }
    }
    for(int i=0;i<n;i++){
        for(auto it: v[i]){
            cout<<it.first;
        }
    }
    // ll ans=0;
    // char a;
    // for(auto &it:m){
    //     if(it.second>ans){
    //         ans=it.second;
    //         a=it.first;
    //     }
    // }
    // for(auto &it:m)
    // {
    //     if(ans==it.second){
    //         cout<<it.first;
    //     }
    // }

    return 0;
}
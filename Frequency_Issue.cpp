#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int>m;
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }
        for(int i=0;i<n;i++){
            m[v[i]+x]++;
        }
        for(int i=0;i<n;i++){
            m[v[i]-x]++;
        }
        int max=0;
        for(auto it:m){
            if(it.second>max){
                max=it.second;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
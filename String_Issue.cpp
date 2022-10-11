#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;
    cin>>q;
    map<char,int>m;
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
        if(m[s[i]]==0){
            m[s[i]]=i+1;
        }
    }
    v[0]=0;
    v[1]=m[s[0]];
    for(int i=2;i<=n;i++){
        v[i]=v[i-1]+m[s[i-1]];
    }
    while(q--)
    {
        int cnt=0;
        int l,r;
        cin>>l>>r;
        cnt=v[r]-v[l-1];
        cout<<cnt<<endl;
    }
    return 0;
}
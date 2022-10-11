#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt0=0,cnt1=0;
    int max0=0,max1=0;
    int cnt=0,maxc=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
        }
        if(s[i]!=s[i+1]){
            cnt=0;
        }
        if(cnt>maxc){
            maxc=cnt;
        }
    }  
    // cout<<maxc<<endl;
    if(maxc>=6){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}
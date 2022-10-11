#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
bool solve(int i,int j,string &s)
{
    if(i>=j){
        return true;
    }
    if(s[i]==s[j]){
        solve(i+1,j-1,s);
    }else{
        return false;
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    if(solve(0,n-1,s)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
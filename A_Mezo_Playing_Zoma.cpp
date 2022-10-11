#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
bool ispalindrome(string str){
    ll len = str.length();
    for (ll i = 0; i < len / 2; i++){
        if (str[i] != str[len - i - 1])
        return false;
    }
    return true;
}
signed main(){
    ll n;
    cin>>n;
    ll l=0,r=0;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++){
        if(s[i]=='L'){
            l++;
        }else{
            r++;
        }
    }
    cout<<(l+r)+1<<endl;
    return 0;
}
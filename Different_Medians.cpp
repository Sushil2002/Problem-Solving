
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll A[n+1];
        ll j=1;
        for(ll i=n;i>=j;i--,j++){
            if(i==j){
                cout<<i<<" ";
                break;
            }
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
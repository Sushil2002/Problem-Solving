#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
string solve(int n,string &s){
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        return "Anton";
    }
    else if(d>a){
        return "Danik";
    }
    else{
        return "Friendship";
    }
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<solve(n,s)<<endl;
    return 0;
}
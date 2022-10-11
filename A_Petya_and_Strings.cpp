#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            if(s1[i]<s2[i]){
                ans=-1;
                break;
            }else{
                ans=1;
                break;
            }
        }
    }
    if(ans==0){
        cout<<0<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}
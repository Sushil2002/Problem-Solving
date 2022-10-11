#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool ispalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
signed main(){
    int tl;
    cin>>tl;
    while(tl--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(ispalindrome(s)){
            cout<<s<<endl;
        }else{
            int cnt0=0,cnt1=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='0'){
                    cnt0++;
                }else{
                    cnt1++;
                }
            }
            string ans="";
            if(cnt0>cnt1){
                for(int i=0;i<cnt0;i++){
                    ans+='0';
                }
            }else{
                for(int i=0;i<cnt1;i++){
                    ans+='1';
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
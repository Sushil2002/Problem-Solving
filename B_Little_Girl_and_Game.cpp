#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    map<char,int>m;
    if(isPalindrome(s)){
        cout<<"First"<<endl;
    }else{
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int cnt1=0,cnt0=0;
        for(auto &it:m){
            if((it.second)%2==1){
                cnt1++;
            }else{
                cnt0++;
            }
        }
        if(cnt1==0){
            cout<<"First"<<endl;
        }
        else if(cnt0==0){
            cout<<"Second"<<endl;
        }
        else if(cnt1%2==1){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
bool isplaindrome(string &s,int i,int j)
{   
    if(i>=j){
        return true;
    }
    if(s[i]==s[j]){
        isplaindrome(s,i+1,j-1);
    }else{
        return false;
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    string a=s1;
    sort(s1.begin(),s1.end());
    string b=s2;
    sort(s2.begin(),s2.end());
    if(n1!=n2){
        cout<<"NO"<<endl;
    }else{
        int cnt=0;
        for(int i=0;i<n1;i++){
            if(a[i]!=b[i]){
                cnt++;
            }
        }
        if(cnt==2 && s1==s2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
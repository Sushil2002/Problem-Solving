#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    string s;
    cin>>s;
    int ch=s[0];
    if(ch<97){
        cout<<s<<endl;
    }else{
        s[0]=s[0]-32;
        cout<<s<<endl;
    }    
    return 0;
}
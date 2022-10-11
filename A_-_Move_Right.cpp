#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    string s,r="0";
    cin>>s;
    for(int i=0;i<3;i++){
        r+=s[i];
    }
    cout<<r<<endl;
    return 0;
}
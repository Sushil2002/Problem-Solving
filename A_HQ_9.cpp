#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
string solve(string s)
{
    bool flag=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' ||s[i]=='Q'||s[i]=='9'  ){
            flag=false;
            break;
        }
    }
    if(flag){
        return "NO";
    }
    else{
        return "YES";
    }
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
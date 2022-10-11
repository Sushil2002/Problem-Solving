#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int Pal(string s,int start,int end)
{
    if(end==start || end-start==1){
        return 1;
    }
    else{
        if(s[start]==s[end]){
            return Pal(s,start+1,end-1);
        }else{
            return 0;
        }
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    if(Pal(s,0,n-1)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
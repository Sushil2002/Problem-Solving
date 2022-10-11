#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt0++;
            }else{
                cnt1++;
            }
        }
        if(cnt1>cnt0){
            cout<<2*cnt0+1<<endl;
        }
        else if(cnt1==cnt0){
            cout<<n<<endl;
        }else{
            cout<<cnt1*2+1<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve(){
      string s;
      cin>>s;
      int cntA=0,cntC=0,cntG=0,cntT=0;
      int cnt=1;
      int max=0;
      for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                  cnt++;
                  if(cnt>max){
                        max=cnt;
                  }
            }else{
                  cnt=1;
            }
      }
      cout<<max<<endl;
}
int main(){
      solve();
      return 0;
}
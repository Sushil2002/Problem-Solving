#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string str=" abcdefghijklmnopqrstuvwxyz";
        // cout<<str.length()<<endl;
        reverse(s.begin(),s.end());
        string ans;
        for(int i=0;i<n;){
            if(s[i]=='0'){
                string temp="";
                temp.push_back(s[i+2]);
                temp.push_back(s[i+1]);
                int a=stoi(temp);
                ans+=str[a];
                i+=3;
            }else{
                string temp="";
                temp.push_back(s[i]);
                int a=stoi(temp);
                ans+=str[a];
                i++;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}
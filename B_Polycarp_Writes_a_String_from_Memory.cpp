#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void solve(string  &str)
{
    set<char>s;
    int ans=1;
    for(int i=0;i<str.length();i++){
        s.insert(str[i]);
        if(s.size()>3){
            ans++;
            s.clear();
            s.insert(str[i]);
        }      
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}
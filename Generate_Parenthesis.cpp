#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
vector<string>v;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void Generate(string s,int open,int close){
    if(open==0 && close==0){
        v.push_back(s);
        return;
    }
    if(open>0){
        s.push_back('(');
        Generate(s,open-1,close);
        s.pop_back();
    }
    if(close>0)
    {
        if(close>open){
            s.push_back(')');
            Generate(s,open,close-1);
            s.pop_back();
        }
    }
}
int main(){
    int n;
    cin>>n;
    string s;
    Generate(s,n,n);
    for(auto it:v){
        cout<<it<<endl;
    }
    return 0;
}
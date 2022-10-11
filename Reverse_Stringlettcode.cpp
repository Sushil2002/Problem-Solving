#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
vector<char>ans;
void Solve(vector<char>&s,int n)  //n=s.size();
{
    if(n<0){
        cout<<"[";
        for(int i=0;i<ans.size()-1;i++){
            cout<<'"'<<ans[i]<<'"'<<",";
        }
        cout<<ans[ans.size()-1];
        cout<<"]";
        return;
    }
    ans.push_back(s[n]);
    Solve(s,n-1);
}
int main(){
   vector<char>s={'h','e','l','l','o'};
   Solve(s,s.size()-1);
   for(auto it:ans){
    cout<<it<<" ";
   }
   cout<<endl;
    return 0;
}
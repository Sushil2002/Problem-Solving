#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void solve(string s)
{
    int n=s.length();
    int A[n];
    for(int i=0;i<n;i++){
        A[i]=s[i];
    }
    int x=-1;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            x=i;
            if(A[n-1]>A[i]){
                break;
            }
        }
    }
    if(x==n || x==-1){
        cout<<-1<<endl;
    }else{
        swap(s[x],s[n-1]);
        cout<<s<<endl;
    }
}
signed main(){
    string s;
    cin>>s;
    solve(s);
    return 0;
}
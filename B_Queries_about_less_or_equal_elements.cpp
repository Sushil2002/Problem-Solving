#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main(){
    int n,m;
    cin>>n>>m;
    vector<int>A(n);
    int B[m];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    sort(A.begin(),A.end());
    vector<int>v;
    //1  1  2  2  5
    //3  1  4  1  5
    for(int i=0;i<m;i++){
        int ans=0;
        vector<int>::iterator upper;
        upper=upper_bound(A.begin(),A.end(),B[i]);
        if((*upper)>B[i]){
            ans+=(upper-A.begin());
        }else{
            ans+=(upper-A.begin());
        }
        v.push_back(ans);
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
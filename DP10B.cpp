#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
void Path(vector<vector<int>>&v)
{
    for(int i=1;i<v[0].size();i++){
        v[0][i]=v[0][i-1]+v[0][i];
    }
    for(int i=1;i<v.size();i++){
        v[i][0]=v[i-1][0]+v[i][0];
    }
    for(int i=1;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            v[i][j]=min(v[i-1][j],v[i][j-1])+v[i][j];
        }
    }
}
signed main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    Path(v);
    // for(auto it:v){
    //     for(auto ele:it){
    //         cout<<ele<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<v[n-1][m-1]<<endl;
    return 0;
}
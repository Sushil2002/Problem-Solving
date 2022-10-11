#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
int cnt=0;
void Solve(vector<vector<int>>&grid,int x,int y,int n)
{
    int i=x;
    int j=y;
    while(x!=n)
    {
        cnt++;
        i++;
    }
    cout<<cnt<<endl;
}
signed main(){
   int n,x,y;
    cin >> n ;
    cin>>x>>y;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    Solve(v,x,y,n);
    return 0;
}
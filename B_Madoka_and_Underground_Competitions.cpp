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
        int n,k,r,c;
        cin>>n>>k>>r>>c;
        char A[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                A[i][j]='.';
            }
        }
        r--;
        c--;
        int val=(r+c)%k;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i+j)%k==val){
                    A[i][j]='X';
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<A[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
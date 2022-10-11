#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        pair<int,int>p;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0,j=i+1;j<n;i++,j++){
            p=make_pair(A[i],A[j]);
        }
        for(auto it:p){
            cout<<p.first<<" "<<p.second<<endl;
        }
    }
    return 0;
}
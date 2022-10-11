#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>A[i];
        m[A[i]]++;
    }
    int ans=0;
    cout<<m.size();
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        int z=(k/x);
        cout<<min(z,n)<<endl;
    }
    return 0;
}
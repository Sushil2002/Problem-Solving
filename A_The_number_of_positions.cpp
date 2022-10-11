#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    int x=b+1;
    int y=n-a;
    cout<<min(x,y)<<endl;
    return 0;
}
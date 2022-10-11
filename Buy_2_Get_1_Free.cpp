#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int z=2*x;
        int sum=(n/3)*z;
        int a=n%3;
        int b=a*x;
        cout<<(b+sum)<<endl;
    }
    return 0;
}
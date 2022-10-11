#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int largeest(int n)
{
    int p=1;
    while(p*2<=n){
        p=p*2;
    }
    return p;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        int lp=largeest(n);
        int sel=lp/2;
        int ans1=n-lp+1;
        int ans2=lp-sel;
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}
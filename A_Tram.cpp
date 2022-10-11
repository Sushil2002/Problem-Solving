#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
int main(){
    ll n ;
    cin>>n;
    int sum=0;
    int z=0;
    while(n--){
        ll a,b;
        cin>>a>>b;
        sum-=a;
        sum+=b;
        z=max(sum,z);
        // cout<<z<<endl;
    }
    cout<<z<<endl;
    return 0;
}
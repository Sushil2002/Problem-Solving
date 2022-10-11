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
    ll n,k;
    cin>>n>>k;
    while(k--){
        int z=n%10;
        if(z!=0){
            n--;
        }else{
            n=n/10;
        }
    }
    cout<<n<<endl;
    return 0;
}
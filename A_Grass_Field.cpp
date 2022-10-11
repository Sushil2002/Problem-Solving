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
    ll t;
    cin>>t;
    while(t--)
    {
        ll A[2][2];
        ll cnt=0;
        for(ll i=0;i<2;i++){
            for(ll j=0;j<2;j++){
                cin>>A[i][j];
                if(A[i][j]==1){
                    cnt++;
                }
            }
        }
        if(cnt==0){
            cout<<0<<endl;
        }
        else if(cnt==1 || cnt==2 || cnt==3){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}
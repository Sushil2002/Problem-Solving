#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n+1];
        int x,y;
        for(int i=1;i<=n;i++){
            cin>>A[i];
            if(A[i]==1){
                x=i;
            }
            if(A[i]==n){
                y=i;
            }
        }
        if(x==1 && y==n){
            cout<<0<<endl;
        }else if(n==2){
            if(x==2){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
        }else{
            int ans=0;
            if(x>y){
                ans+=(x-1);
                ans+=(n-y)-1;
            }else{
                ans+=(x-1);
                ans+=(n-y);
                
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
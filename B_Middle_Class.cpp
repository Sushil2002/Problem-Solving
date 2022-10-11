#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans=0,cnt=1,sum=0;
        for(ll i=n-1;i>=0;i--)
        {
            sum+=v[i];
            if(sum/cnt>=x){
                ans++;
                cnt++;
            }else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
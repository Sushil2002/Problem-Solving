#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>m;
        ll n;
        cin>>n;
        int A[n];
        bool flag=false;
        //int sum=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            m[A[i]]++;
        }
        int ans=-1;
        for(auto &it:m){
            if(((it).second)>=3){
                ans=it.first;
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
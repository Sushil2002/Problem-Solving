#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve()
{
    long long int n,k;
    cin>>n>>k;
    long long int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    ll cnt=0;ll x=A[k-1];
    for (int i = 0; i < n; i++)
    {
        if(A[i]>0)
        {
            if(A[i]>=x){
            cnt++;
        }
        }
    }
    cout<<cnt<<endl;
    
}
int main(){
    solve();
    return 0;
}
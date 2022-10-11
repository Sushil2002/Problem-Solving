#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){ll n;
    cin>>n;
    ll A[n];
    for(ll i=0;i<n;i++)
    {
        cin>>A[i];
    }
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(A[i+1]<A[i])
        {
            cnt=cnt+(A[i]-A[i+1]);
            A[i+1]=A[i];
        }
    }
    cout<<cnt<<endl;
    
    return 0;
}
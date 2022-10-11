#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<string>A(n);
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }
        ll res=0,cnt=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(A[i][j]=='.'  && j+1<m  && A[i][j+1]=='.'){
                    ll a=2*x;
                    ll b=y;
                    res+=min(a,b);
                    j++;
                }else if(A[i][j]=='.'){
                    res+=x;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
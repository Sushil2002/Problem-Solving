#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool isprime(ll n)
{
    
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (isprime(n))
        {
            if (k >= n)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << n << endl;
            }
        }
        else
        {
            ll minq=0;
            ll z=sqrt(n);
            if(z<k){
                minq=z;
            }else{
                minq=k;
            }
            ll ans=INT_MAX;
           for(ll i=minq;i>0;i--){
               if(n%i==0){
                  ans=min(ans,n/i);
               }
               if(n%(n/i)==0 && n/i<=k){
                   ans=min(i,ans);
               }
           }
           cout<<ans<<endl;
        }
    }
    return 0;
}
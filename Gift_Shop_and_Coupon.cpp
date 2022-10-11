#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
ll fun(ll n)
{
    if(n%2==0){
        return n/2;
    }else{
        return (n/2+1);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll A[n];
        ll sum = 0, cnt = 0;
        bool flag=true;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        if (sum <= k)
        {
            cout << n << endl;
        }
        else
        {
            sort(A,A+n);
            ll item=n;
            for (ll i = 0; i < n; i++)
            {
                if(item>0 && k>A[i])
                {
                    cnt++;
                    k=k-A[i];
                    item--;
                }else if(item)
                {
                    if(fun(A[i])<=k)
                    {
                        cnt++;
                        k=k-A[i];
                        item--;
                    }
                    else{
                        flag=false;
                    }
                }
            }
            cout<<cnt<<endl;
            
        }
    }
    return 0;
}
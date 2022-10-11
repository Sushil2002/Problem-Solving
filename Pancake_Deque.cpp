#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for(ll i=0;i<t;i++)
    {
        cout<<"Case #"<<i+1<<": ";
        ll n;
        cin >> n;
        ll A[n];
        deque<ll> q;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            q.push_back(A[i]);
        }
        ll cnt = 1;
        ll x = q.front();
        ll y = q.back();
        ll z;
        if (x < y)
        {
            z = q.front();
            q.pop_front();
        }
        else
        {
            z = q.back();
            q.pop_back();
        }
        while (!q.empty())
        {
            ll a = q.front();
            ll b = q.back();
            if(a>b)
            {
                if(b>=z){
                    cnt++;
                    z=b;
                    q.pop_back();
                }else{
                    q.pop_back();
                }
            }
            else{
                if(a>=z){
                    cnt++;
                    z=a;
                    q.pop_front();
                }else{
                    q.pop_front();
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
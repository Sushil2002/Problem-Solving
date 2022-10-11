#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    {
        for (int i = 1; i <= n; i++)
        {
            if(i==1)
            {
                cout<<0<<endl;
            }
            else if(i==2)
            {
                cout<<6<<endl;
            }
            else{
                ll z = i*i;
            ll x=z*(z-1)/2;
            ll a=8*(i-2)*(i-1)/2;
            cout<<x-a<<endl;
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll m;
    cin >> m;
    ll n = m - 1;
    ll A[n];
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    bool aj=false;
    for (ll i = 0; i < n;i++)
    {
        if(v[i]!=i+1){
            aj=true;
            cout<<i+1<<endl;
            break;
        }
    }
    if(aj==false){
        cout<<m<<endl;
    }

    return 0;
}
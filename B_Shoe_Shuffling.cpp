#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void Sovle()
{
    ll n;
        cin >> n;
        vector<ll>v(n);
         map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        for (auto it : m)
        {
            if (it.second < 2)
            {
                cout << -1 << endl;
                return ;
            }
        }
        ll i=0,j=1;
        for(auto it:m)
        {
            i+=it.second;
            cout<<i<<" ";
            for(int k=j;k<i;k++){
                cout<<k<<" ";
            }
            j=i+1;
        }
        cout<<endl;
}
int main()
{
    ll t;
    cin >> t;
   
    while (t--)
    {
     Sovle();   
    }
    return 0;
}
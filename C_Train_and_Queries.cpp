#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

int main()
{
    map<ll, vector<ll>> mp;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll A[n];
        map<ll, ll> m1;
        map<ll, ll> m2;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            if (m1.find(A[i]) == m1.end())
            {
                m1[A[i]] = i;
                m2[A[i]] = i;
            }
            else
            {
                m2[A[i]] = i;
            }
        }
        while (k--)
        {
            ll a, b;
            cin >> a >> b;
            int x=-1, y=-1;
            bool aj = true;
            if (m1.find(a) != m1.end())
            {
                auto it = m1.find(a);
                x = (*it).second;
                auto it1 = m1.find(b);
                if (it1 != m1.end())
                {
                    y = (*it1).second;
                    if (x > y)
                    {
                        auto it2 = m2.find(b);
                        if (it2 != m2.end())
                        {
                            y = (*it2).second;
                        }
                    }
                }
            }
            if(x==-1 || y==-1){
                cout<<"NO"<<endl;
            }else if(y>x){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
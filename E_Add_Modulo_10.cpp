#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % 10 == 0)
            {
                s.insert({v[i]});
            }
            else if (v[i] % 10 == 5)
            {
                v[i]+=5;
                s.insert({v[i]});
            }
            else
            {
                while (v[i] % 10 != 2)
                {
                    v[i] = v[i] + (v[i] % 10);
                }
                s.insert({v[i]});
            }
        }
        ll cnt = 0;
        for (auto it : s)
        {
            if (it % 10 == 0)
            {
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            cout << "No" << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            bool flag = true;
            for (ll i = 0; i < n-1; i++)
            {
                ll diff=v[i+1]-v[i];
                if (diff % 20 != 0)
                {
                    cout<<"No"<<endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "Yes" << endl;
            }
            
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll A[n];
        map<ll, ll> m;
        set<ll> m2;
        // map<ll, ll> m3;
        vector<int> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            m[A[i]]++;
            v.push_back(A[i]);
        }

        int maxi = 0;
        bool flag = true;
        ll cnt = 0;
        for (auto it : m)
        {
            if (it.second > 2)
            {
                flag = false;
            }
            if (it.second == 1)
            {
                m2.insert(it.first);
                cnt++;
                // flag = false;
            }
            if (maxi < it.first)
            {
                maxi = it.first;
            }
        }
        int ans = cnt / 2;
        ans += cnt % 2;
        if (cnt == 0)
        {
            ans = 0;
        }
        else if (flag == false)
        {
            ans = cnt / 2;
            ans += cnt % 2;
        }
        else
        {
            bool flag1=true;
            for(auto ele : m2)
            {
                if(ele<maxi)
                {
                    flag1=false;
                    break;
                }
            }
            if(flag1)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool ispalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll A[n + 1];
        map<ll, ll> mp;
        vector<pair<ll, ll>> res;

        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            mp[u]++;
            mp[v]++;
            res.push_back({u, v});
        }
        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        if (m % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 1e18;
            for (int i = 1; i <= n; i++)
            {
                if (mp[i] % 2 == 1)
                {
                    ans = min(ans, A[i]);
                }
            }
            for (int i = 0; i < m; i++)
            {
                ll f = res[i].first;
                ll s = res[i].second;
                if (mp[f] % 2 == 0 && mp[s] % 2 == 0)
                {
                    ans = min(ans, A[f] + A[s]);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
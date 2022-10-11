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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            ll search = 2 * v[i];
            auto it = mp.upper_bound(search);
            it--;
            if ((*it).first == v[i])
            {
                if ((*it).second == 1)
                {
                    it--;
                    auto x = mp.begin();
                    x--;
                    if (it == x)
                    {
                        res.push_back(-1);
                    }
                    else
                    {
                        res.push_back((*it).first);
                    }
                }
                else
                {
                    res.push_back((*it).first);
                }
            }
            else
            {
                res.push_back((*it).first);
            }
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
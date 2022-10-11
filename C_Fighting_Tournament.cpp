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
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x = v[0];
        vector<int> vic(n + 1, 0);
        if (x != n)
        {
            for (int i = 1; i < n; i++)
            {
                if (x > v[i])
                {
                    vic[x]++;
                }
                else
                {
                    vic[v[i]]++;
                    x = v[i];
                }
                if (v[i] == n)
                {
                    break;
                }
            }
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[i + 1] = v[i];
        }
        // for (auto it : mp)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        while (q--)
        {
            int i, k;
            cin >> i >> k;
            if (i - 1 > k)
            {
                cout << 0 << endl;
            }
            else
            {
                int ans = k - i + 1;
                if (mp[i] == n)
                {
                    cout << vic[mp[i]] + ans << endl;
                }
                else if (ans >= vic[mp[i]])
                {
                    cout << vic[mp[i]] << endl;
                }
                else
                {
                    if (i != 1)
                    {
                        cout << k - i + 1 + 1 << endl;
                    }
                    else
                    {
                        cout << k - i + 1 << endl;
                    }
                }
            }
        }
    }
    return 0;
}
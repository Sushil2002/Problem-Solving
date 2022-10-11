#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        vector<ll> v;
        ll cnt = 0, cnt0 = 0;
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
            if (s[i] == '1')
            {
                cnt0 += cnt;
                if (cnt != 0)
                    m[cnt]++;
                cnt = 0;
            }
        }
        if (cnt != 0)
            m[cnt]++;
        cnt0 += cnt;

        // for (auto it : m)
        // {
        //     cout << it.first << "-->" << it.second << endl;
        // }
        // cout << cnt0 << endl;

        ll answer = 0;
        for (auto it = m.rbegin(); it != m.rend(); it++)
        {
            ll f = it->first;
            ll s = it->second;
            // cout << "f-->" << f << "and s-->" << s << endl;
            while ((2 * (f) + 1) <= x && s != 0)
            {
                answer += f;
                x -= 2 * (f) + 1;
                s--;
            }
            if (s > 0 && f != 0)
            {
                m[f - 1] += s;
                m[1] += s;
            }
        }

        cout << answer + n - cnt0 << endl;
    }
}
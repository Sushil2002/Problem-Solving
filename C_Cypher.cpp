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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int ans = 0;
            for (int i = 0; i < x; i++)
            {
                char ch;
                cin >> ch;
                if (ch == 'U')
                {
                    ans--;
                }
                else
                {
                    ans++;
                }
            }
            if (ans < 10)
            {
                ans += 10;
            }
            v[i] = (v[i] + ans) % 10;
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
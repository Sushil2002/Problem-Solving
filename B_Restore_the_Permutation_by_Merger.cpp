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
        int n;
        cin >> n;
        vector<int> v(2 * n);
        vector<int> check(n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans;
        for (int i = 0; i < 2 * n; ++i)
        {
            if (!check[v[i] - 1])
            {
                check[v[i] - 1] = true;
                ans.push_back(v[i]);
            }
        }
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
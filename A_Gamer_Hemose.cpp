#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        int a = v[v.size() - 1];
        int b = v[v.size() - 2];
        int ans = a + b;
        if (h % ans == 0)
        {
            cout << (h / ans) * 2 << endl;
        }
        else
        {
            int z = h % ans;
            if (z > a)
            {
                cout << 2 * (h / ans) + 2 << endl;
            }
            else
            {
                cout << 2 * ((h / ans)) + 1 << endl;
            }
        }
    }
    return 0;
}
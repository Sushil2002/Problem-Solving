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
        if (n % 2 == 1)
        {
            vector<int> v(n + 1);
            v[1] = 1;
            v[2] = 2;
            v[3] = 3;
            for (int i = 4; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    v[i] = i + 1;
                }
                else
                {
                    v[i] = i - 1;
                }
            }
            v[n - 1] = n - 1;
            v[n] = n;
            for (int i = 1; i <= n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "2 1 ";
            for (int i = n - 2; i >= 3; i--)
            {
                cout << i << " ";
            }
            cout << n - 1 << " " << n << endl;
        }
    }
    return 0;
}
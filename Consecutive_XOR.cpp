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
        string s1, s2;
        cin >> s1 >> s2;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '0')
            {
                cnt++;
            }
        }
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else if (cnt == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool aj = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (s2[i] == s2[i + 1])
                {
                    aj = true;
                    break;
                }
            }
            if (aj)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
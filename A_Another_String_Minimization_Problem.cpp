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
        ll n, m;
        cin >> n >> m;
        int A[n + 1];
        char B[m + 1];
        for (int i = 1; i <= m; i++)
        {
            B[i] = 'B';
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        int x;
        for (int i = 1; i <= n; i++)
        {
            int a = A[i];
            int b = m + 1 - A[i];
            x = min(a, b);
            if (B[x] == 'A')
            {
                x = max(a, b);
                B[x] = 'A';
            }
            else
            {
                B[x] = 'A';
            }
        }
        for (int i = 1; i <= m; i++)
        {
            cout << B[i];
        }
        cout << endl;
    }
    return 0;
}
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
        int A[n];
        bool aj = true;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 1; i < n; i++)
        {
            if ((A[i] % A[0]) != 0)
            {
                aj = false;
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
    return 0;
}
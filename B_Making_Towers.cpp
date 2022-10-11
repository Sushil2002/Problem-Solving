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
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        bool aj = true;
        int B[n + 1] = {0};
        vector<int> v(n + 1, -1);

        for (int i = 0; i < n; i++)
        {
            if (v[A[i]] != -1)
            {
                if ((v[A[i]] + i) % 2 != 0)
                {
                    v[A[i]] = i;
                    aj = false;
                    B[A[i]]++;
                }
            }
            else
            {
                v[A[i]] = i;
                aj = true;
                B[A[i]]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
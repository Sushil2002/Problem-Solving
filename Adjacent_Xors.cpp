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
        int n, x;
        cin >> n >> x;
        int A[n];
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            mini = min(mini, A[i]);
            maxi = max(maxi, A[i]);
        }
        // cout << mini << maxi << endl;
        bool aj = false;
        bool s = false;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == mini && aj == false)
            {
                continue;
                aj = true;
            }
            else if (A[i] == maxi && s == false)
            {
                continue;
                s = true;
            }
            else
            {
                A[i] += x;
            }
        }
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += ((A[i]) ^ (A[i + 1]));
        }
        cout << sum << endl;
    }
    return 0;
}
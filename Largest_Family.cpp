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
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
            if (A[i] != 0)
            {
                if (i >= A[i])
                    cnt++;
            }
        }
        cout << n - cnt << endl;
    }
    return 0;
}
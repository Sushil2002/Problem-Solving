#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    if (v[1])
    {
        cout << n + 1 << " ";
        for (int i = 1; i <= n ; i++)
        {
            cout << i << " ";
        }
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (!v[i] && v[i + 1])
        {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
            cout << n + 1 << " ";
            for (int j = i + 1; j <= n; j++)
                cout << j << " ";
            return;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<n+1<<" ";
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}

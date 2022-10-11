#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve()
{
     ll n, m;
    cin >> n >> m;
    ll arr[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll suff[n + 1];
    ll pre[n + 1];
    suff[1] = 0;
    pre[1] = 0;
    ll sol = 0;
    
    pre[n] = 0;
    for (ll i = n - 1; i > 0; i--)
    {
        if (arr[i + 1] > arr[i])
        {
            sol += (arr[i + 1] - arr[i]);
            pre[i] = sol;
        }
        else
        {
            pre[i] = sol;
        }
    }
    sol = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sol += (arr[i - 1] - arr[i]);
            suff[i] = sol;
        }
        else
        {
            suff[i] = sol;
        }
    }
    
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << abs(suff[x] - suff[y]) << endl;
        }
        else
        {
            cout <<abs( pre[x] - pre[y] )<< endl;
        }
    }
}
int main()
{
   Solve();

    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{

    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    if (n >= x)
    {
        cnt = 1;
    }
    else
    {
        cnt = 0;
    }
    for (ll i = 2; i < n + 1; i++)
    {
        if (x % i == 0)
        {
            if (x / i <= n)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
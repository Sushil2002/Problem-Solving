#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool ispalindrome(string str)
{
    ll len = str.length();
    for (ll i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
bool issort(ll A[], ll n)
{
    for (ll i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }
    return true;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = v[i] - i; j <= n; j += v[i])
            {
                if (j > 0)
                {
                    if ((v[i] * v[j]) == (i + j) && j > i)
                    {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
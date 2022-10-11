
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
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        ll ans = (a + n) - (n % a);

        if ((n % a == 0) && (n % b != 0))
        {
            cout << n << endl;
        }
        else if (a % b == 0)
        {

            cout << -1 << endl;
        }
        else
        {
            while ((ans % b) == 0)
            {
                ans += a;
            }
            cout << ans << endl;
        }
    }
    return 0;
}

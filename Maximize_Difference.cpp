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
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        int ans = INT_MIN;
        int l = 0, k = 0;
        int maxi = m - n;
        int diff = 0;
        for (int i = n; i <= m; i++)
        {

            int b = m - (m % i);
            int a = i;
            if ((i - n) > diff)
            {
                break;
            }
            if ((b - a) >= ans)
            {
                diff = (maxi - (b - a));
                l = a;
                k = b;
                ans = (b - a);
            }
        }
        cout << l << " " << k << endl;
    }
    return 0;
}
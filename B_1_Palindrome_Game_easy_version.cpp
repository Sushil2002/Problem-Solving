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
        string s;
        cin >> s;
        ll cnt0 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
        }

        if (cnt0 % 2 == 0 || cnt0 == 1)
        {
            cout << "BOB" << endl;
        }
        else if (n % 2 != 0)
        {
            cout << "ALICE" << endl;
        }
        else if (cnt0 == 0)
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}
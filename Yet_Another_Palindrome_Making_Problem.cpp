#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool ispalindrome(string s)
{

    ll len = s.length();

    for (ll i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (ispalindrome(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<char> v1, v2;
            // sort(s.begin(), s.end());
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 != 0)
                {
                    v2.push_back(s[i]);
                }
                else
                {
                    v1.push_back(s[i]);
                }
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            if (v1==v2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Cost(string s)
{
    ll x1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        x1 += (s[i] - 'a' + 1);
    }
    return x1;
}
void solve()
{

    ll a = 0;
    string s;
    cin >> s;
    cin >> a;
    string s1 = s;
    ll cost = Cost(s);
    sort(s1.begin(), s1.end());
    reverse(s1.begin(), s1.end());
    map<char, ll> mp;
    if (cost <= a)
    {
        cout << s;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        ll x1 = (s1[i] - 'a' + 1);
        if (mp[s1[i]] > 0)
        {
            mp[s1[i]]--;
        }
        cost -= x1;
        if (cost <= a)
        {
            break;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] > 0)
        {
            cout << s[i];
            mp[s[i]]--;
        }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}
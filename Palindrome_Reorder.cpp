#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
signed main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    vector<char> odd;
    string si = "";
    for (auto c : mp)
    {
        if (c.second % 2 == 0)
        {
            string sub(c.second / 2, c.first);
            si += sub;
        }
        else
        {
            odd.push_back(c.first);
        }
    }
    if (odd.size() == 1)
    {
        int rep = mp[odd[0]] / 2;
        string odds(rep, odd[0]);
        si += odds;
        string p = si;
        reverse(p.begin(), p.end());
        string ans = si + odd[0] + p;
        cout << ans << endl;
    }
    else if (odd.size() > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        string p = si;
        reverse(p.begin(), p.end());
        cout << si << p << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main()
{
    string s = "the quick brown fox jumps over the lazy dog";
    map<char, char> m;
    char c = 'a';
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            if (m.find(s[i]) == m.end())
            {
                m.insert({s[i], c});
                c++;
            }
        }
    }
    string news="vkbs bs t suepuv";
    //cin >> news;

    char ans[news.length()];
    for (int i = 0; i < news.length(); i++)
    {
        if (news[i] == ' ')
        {
            ans[i] = '.';
        }
        else
        {

            ans[i] = m[news[i]];
        }
    }
    for (int i = 0; i < news.length(); i++)
    {
        if (ans[i] == '.')
        {
            cout << " ";
        }
        else
        {
            cout << ans[i];
        }
    }
    cout << endl;

    return 0;
}

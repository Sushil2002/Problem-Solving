#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve()
{
    map<char, int> s_map;
    string str;
    cin >> str;
    ll start = 0;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        s_map[str[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        auto cs = s_map.find(str[i]);
        if ((*cs).second == 1)
        {
            start = i;
            break;
        }
        (*cs).second--;
    }
    for (auto j = start; j < n; j++)
    {
        cout << str[j];
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return "Yes";
    }
    else {
        // return "No"
        return "No";
    }
}
string f(string s, int n, map<char, int> m)
{
    int i = 0;
    int k = 0;
    while (i < n)
    {
        m[s[i]] = i;
        i++;
    }
    for (auto ele : m)
    {
        while (ele.second >= k)
        {
            if (s[k] != '9' && ele.first != s[k])
            {
                int x = s[k] - '0';
                x++;
                char ch = x + '0';
                s[k] = ch;
            }
            k+=1;
        }
    }
    sort(s.begin(), s.end());
    return s;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        map<char, int> m;
        ll n = str.length();
        cout << f(str, n, m) << endl;
    }
    return 0;
}
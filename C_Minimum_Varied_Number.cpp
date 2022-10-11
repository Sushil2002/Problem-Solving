#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        if (s <= 9)
        {
            cout << s << endl;
        }
        else
        {
            int n = 9;
            vector<int> v;
            while (s > n)
            {
                s = s - n;
                v.push_back(n);
                n--;
            }
            cout<<s;
            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i];
            }
            cout << endl;
        }
    }
    return 0;
}
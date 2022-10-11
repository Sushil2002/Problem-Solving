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
        int a, b, c;
        cin >> a >> b >> c;
        int z = abs(b-c)+c;
        if (a == z)
        {
            cout << 3 << endl;
        }
        else if (a > z)
        {
            cout << 2 << endl;
        }
        else
            cout << 1 << endl;
    }
    return 0;
}
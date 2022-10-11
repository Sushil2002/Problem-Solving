#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
void Solve(int n, int k)
{
    if (k % 4 != 0) // For values
    {
        cout << "YES\n";

        if (k % 2 == 1)
        {
            int i = 1;
            while (i < n)
            {
                cout << i << " " << i + 1 << endl;
                i = i + 2; // increemnt
            }
        }
        else
        {
            int check = 1;
            int i = 1;
            while (i < n)
            {
                if (check)
                {
                    cout << i + 1 << " " << i << endl;
                    check = 0;
                }
                else
                {
                    cout << i << " " << i + 1 << endl;
                    check = 1;
                }
                i = i + 2; // increment
            }
        }
    }
    else // NO
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solve(n, k);
    }
    return 0;
}
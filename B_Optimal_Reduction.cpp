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
        ll n;
        cin >> n;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool check = false;
        ll lmx = 0;
        if (arr[0] > arr[1])
        {
            bool ch = false;
            //  cout << "if\n";
            lmx = 0;
            for (int i = lmx; i < n - 1; i++)
            {
                if (arr[i + 1] > arr[i])
                {
                    ch = true;
                    break;
                }
            }
            if (!ch)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            // cout << "else\n";
            int i;
            for (i = 0; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    lmx = i;
                    break;
                }
            }
            if (i == n - 1)
            {
                cout << "YES\n";
            }
            else
            {
                bool ch = false;

                for (int i = lmx; i < n - 1; i++)
                {
                    if (arr[i + 1] > arr[i])
                    {
                        ch = true;
                        break;
                    }
                }
                if (!ch)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}
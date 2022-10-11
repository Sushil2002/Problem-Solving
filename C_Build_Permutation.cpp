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
       vector<int>v(n,-1);
        int i;
        for (i = n - 1; i >= 0; i--)
        {
            for (int k = 0; k <= i; k++)
            {
                int p = k + i;
                int q = sqrt(p);
                if ((q * q) == p)
                {
                    // cout << "k" << k << endl;
                    int k1 = k; // 3    2
                    int i1 = i; // 6    2
                    while (k1 <= i1)
                    {

                        v[k1] = i1; // right
                        v[i1] = k1; // right
                        k1++;
                        i1--;
                    }

                    i = k ;
                    // cout << endl;
                    // cout << "i" << i << endl;
                    break;
                }
            }
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
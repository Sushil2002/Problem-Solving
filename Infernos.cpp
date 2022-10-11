#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    /*5 4
2 2 4 1 1
    */
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int A[n];
        int be = 0, ab = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            v.push_back(A[i]);
            if (A[i] <= x)
            {
                be++;
            }
            else
            {
                ab++;
            }
        }
        sort(v.begin(), v.end());
        ll a = v[n - 1];
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] <= x && A[i] != 0)
            {
                cnt++;
            }
            else
            {
                if (A[i] != 0)
                {
                    ll k;
                    if (A[i] % x != 0)
                    {
                        k= (A[i] / x) + 1;
                    }
                    else
                    {
                        k= (A[i] / x);
                    }
                    cnt += k;
                }
            }
        }
        cout << min(a, cnt) << endl;
    }
    return 0;
}
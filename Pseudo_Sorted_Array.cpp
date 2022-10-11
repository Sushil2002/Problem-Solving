#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll A[n], B[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            B[i] = A[i];
        }
        sort(B, B + n);
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (A[i] == B[i])
            {
                cnt++;
            }
        }

        bool flag = true;
        for (ll i = 0; i < n - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                swap(A[i], A[i + 1]);
                break;
            }
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (A[i] != B[i])
            {
                flag = false;
            }
        }
        if (cnt == n)
        {
            cout << "YES" << endl;
        }
        else if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
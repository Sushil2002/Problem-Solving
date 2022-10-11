#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
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
    int l = 0, r = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == B[i])
        {
            cnt++;
        }
    }
    if (cnt == n)
    {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
    for (int i = 0; i < n - 1;)
    {
        if (A[i] < A[i + 1])
        {
            i++;
        }
        else
        {
            l = i;
            r = i;
            while (i + 1 < n && A[i] > A[i + 1])
            {
                i++;
                r++;
            }

            sort(A + l, A + r + 1);

            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes\n"
         << l + 1 << " " << r + 1 << endl;
    return 0;
}
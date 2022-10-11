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
        ll A[n];
        ll no = 0;
        ll p = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] < 0)
            {
                no++;
            }
            else if (A[i] > 0)
            {
                p++;
            }
        }
        ll neg=no*(no-1)/2;
        ll pos=p*(p-1)/2;
        cout<<neg+pos<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    // cout<<log2(0)<<endl;
    while (t--)
    {
        ll n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int cnt = 0;
        ll x = 0;
        ll y;
        for (int i = n - 2; i >= 0; i--)
        {
            if (A[i + 1] == 0)
            {
                cnt = -1;
                break;
            }
            else if (A[i] >= A[i + 1])
            {
                x = log2(A[i]);
                y = log2(A[i + 1]);
               
                A[i] = A[i] / pow(2, (x - y));
                cnt += x - y;
                if (A[i] >= A[i + 1])
                {
                    A[i] = A[i] / pow(2, 1);
                    cnt++;
                } 
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
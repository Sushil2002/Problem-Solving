#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int N=2*n;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        bool flag = true;
        for (int i = 0; i < n ; i++)
        {
            if ((A[n+i] - A[i]) < x)
            {
                // cout<<A[i] - A[n + i]<<" ";

                flag = false;
                break;
            }
        }
        if (flag)
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
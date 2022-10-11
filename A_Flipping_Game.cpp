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
    int n;
    cin >> n;
    int A[n];
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 1)
        {
            cnt++;
        }
    }
    int maxi = 0;
    for (int k = 0; k <= n - 1; k++)
    {
        int temp = cnt;
        for (int m = k; m < n; m++)
        {
            if (A[m] == 1)
            {
                temp--;
            }
            else
            {
                temp++;
            }
            maxi = max(temp, maxi);
        }
        maxi = max(temp, maxi);
    }
    cout << maxi << endl;
    return 0;
}
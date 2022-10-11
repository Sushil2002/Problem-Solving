#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool ispalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int x = 0;
        int max_peak = 0;
        vector<int> v(n, 0);
        for (int i = 1; i < k - 1; i++)
        {
            if (A[i] > A[i - 1] && A[i] > A[i + 1])
            {
                max_peak++;
                v[i] = 1;
            }
        }
        x = 1;
        ll ans = max_peak;
        ll l = 0;
        for (int i = k; i < n; i++)
        {
            if (v[x] == 1)
            {
                max_peak--;
                v[x] = 0;
            }
            if (A[i - 1] > A[i - 2] && A[i - 1] > A[i])
            {
                max_peak++;
                v[i - 1] = 1;
            }
            if (ans < max_peak)
            {
                ans = max_peak;
                l = x;
            }
            x++;
        }
        cout<<ans+1<<" "<<l+1<<endl;
    }
    return 0;
}
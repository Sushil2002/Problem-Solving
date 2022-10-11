#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll A[n];
    ll B[m];
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    sort(A,A+n);
    ll i = 0, j = 0;
    while (j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] >= B[j])
        {
            if (A[i] == B[j])
            {
                ans.push_back(A[i]);
                A[i] = 0;
                sort(A,A+n);
                j++;
                i = 0;
            }
            else if (A[i - 1] == 0)
            {
                ans.push_back(-1);
                j++;
                i = 0;
            }
            else
            {
                ans.push_back(A[i - 1]);
                A[i - 1] = 0;
                sort(A,A+n);
                j++;
                i = 0;
            }
        }
        else if (B[j] != A[n - 1])
        {
            ans.push_back(-1);
            j++;
            i = 0;
        }
    }
    for (auto &it : ans)
    {
        cout << it << endl;
    }
    return 0;
}
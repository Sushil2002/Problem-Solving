#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            v.push_back(A[i]);
        }
        sort(v.begin(), v.end());
        int a = v[0];
        int k;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == a)
            {
                k = i;
                break;
            }
        }
        // cout<<k<<endl; right
        if (k == n - 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int m = 0;
            for (int i = k + 1; i < n; i++)
            {
                m = max(A[i], m);
            }
            cout << m -a << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool issort(vector<ll> arr, ll n)
{
    if (n == 0 || n == 1)
        return true;
    for (ll i = 1; i < n; i++)
        if (arr[i - 1] > arr[i])
            return false;
    return true;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
         if (x >= n)
        {
            if (issort(v, n))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (issort(v, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            if (x <= n / 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                ll a = n - x;
                vector<ll> temp;
                for (ll i = 0; i < a; i++)
                {
                    temp.push_back(v[i]);
                }
                for (ll i = n - 1; i >= n - a; i--)
                {
                    temp.push_back(v[i]);
                }
                sort(temp.begin(), temp.end());
                vector<ll> ans;
                for (ll i = 0; i < temp.size() / 2; i++)
                {
                    ans.push_back(temp[i]);
                }
                for (ll i = a; i < n - a; i++)
                {
                    ans.push_back(v[i]);
                }
                for (ll i = temp.size() / 2; i < temp.size(); i++)
                {
                    ans.push_back(temp[i]);
                }
                ll j = ans.size();
                if (issort(ans, j))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
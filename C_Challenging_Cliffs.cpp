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
    ll len = str.length();
    for (ll i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
bool issort(ll A[], ll n)
{
    for (ll i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }
    return true;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        if (n == 2)
        {
            cout << v[0] << " " << v[1] << endl;
        }
        else
        {
            // 1 2 2 4
            ll x, y;
            ll mini = INT_MAX;
            for (ll i = 1; i < n; i++)
            {
                if ((v[i] - v[i - 1]) < mini)
                {
                    mini = v[i] - v[i - 1];
                    x = i;
                    y = i - 1;
                }
            }
            // cout<<"x"<<x<<endl;
            // cout<<"y"<<y<<endl;
            vector<ll> v1; // max elements
            vector<ll> v2; // Min elements
            cout << v[x] << " ";
            for (ll i = 0; i < n; i++)
            {
                if (i == x || i == y)
                {
                    continue;
                }
                if (v[i] >= v[x])
                {
                    v1.push_back(v[i]);
                }
                else
                {
                    v2.push_back(v[i]);
                }
            }
            // cout<<"v1"<<endl;
            // for(auto it:v1){
            //     cout<<it<<" ";
            // }
            // cout<<"v2"<<endl;
            // for(auto it:v2){
            //     cout<<it<<" ";
            // }
            // cout<<endl;
            for (ll i = 0; i < v1.size(); i++)
            {
                cout << v1[i] << " ";
            }
            ll j = v2.size() - 1;
            for (ll i = 0; i < v2.size(); i++)
            {
                cout << v2[i] << " ";
            }
            cout << v[y] << endl;
        }
    }
    return 0;
}
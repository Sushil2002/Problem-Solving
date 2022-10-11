#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v1, v2;
    ll sum1 = n, sum2 = n - 1;
    v1.push_back(n);
    v2.push_back(n - 1);
    for (ll i = n - 2; i >= 1; i--)
    {
        if (sum1 >= sum2)
        {
            sum2 += i;
            v2.push_back(i);
        }
        else
        {
            sum1 += i;
            v1.push_back(i);
        }
    }
    if (sum1 == sum2)
    {
        cout << "YES" << endl;
        cout << v1.size() << endl;
        for (ll i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (ll i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
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
        string s;
        cin >> s;
        ll n = s.length();
        ll sum = 0;
        vector<char> a;
        vector<char> b;
        if (n % 2 == 0)
        {
            for (ll i = 0; i < n; i++)
            {
                sum += s[i] - 96;
            }
            cout << "Alice " << sum << endl;
        }
        else if (n == 1)
        {
            sum = s[0] - 96;
            cout << "Bob " << sum << endl;
        }
        else
        {
            ll x = s[0] ;
            ll y = s[n - 1] ;
            if (x >= y)
            {
                for (ll i = 0; i < n; i++)
                {
                    sum += s[i] - 96;
                }
                ll sc=s[n-1]-96;
                sum=sum-sc;
                cout<<"Alice "<<sum-sc<<endl;
            }else{
                for (ll i = 0; i < n; i++)
                {
                    sum += s[i] - 96;
                }
                ll sc=s[0]-96;
                sum=sum-sc;
                cout<<"Alice "<<sum-sc<<endl;
            }
        }
    }
    return 0;
}
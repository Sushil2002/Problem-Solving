#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        if (a == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {

                if (ceil(sqrt(a)) == floor(sqrt(a)))
                {
                    if (isPrime(sqrt(a)))
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    // cout<<sqrt(n)<<endl;
    return 0;
}
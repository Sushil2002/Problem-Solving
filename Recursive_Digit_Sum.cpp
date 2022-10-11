#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
ll Vaule(ll n,ll k)
{
    
    if (n == 0)
    {
        return 0;
    }
    return Vaule(n / 10,k) + n % 10*k;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    ll sum = Vaule(n,k);
    while (true)
    {
        if (sum < 10)
        {
            cout << sum << endl;
            break;
        }
        else
        {
            sum=Vaule(sum,1);
        }
    }
    // cout<<sum<<endl;

    return 0;
}
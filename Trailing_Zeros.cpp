#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    
     ll n;
        cin >> n;
        ll i = 1;
        ll cnt = 0;
        while (true)
        {
            ll x = pow(5, i);
            cnt += n / x;
            i++;
            if (n / x == 1 || n / x == 0)
            {
                break;
            }
        }
        cout << cnt << endl;
    
    return 0;
}
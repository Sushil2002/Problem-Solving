#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int m = 2;
        vector<int> v;
        ll a, b, c;
        int z = sqrt(n);
        int cnt = 0;
        for (int i = 2; i <= z; i++)
        {
            if (cnt == 2)
            {
                break;
            }
            if (n % i == 0)
            {
                v.push_back(i);
                n = n / i;
                cnt++;
            }
        }
        if (cnt == 0 || cnt == 1)
        {
            cout << "NO" << endl;
        }
        else if (cnt == 2)
        {
            v.push_back(n);
            if (v[0] == v[2] || v[1] == v[2])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << v[0] << " " << v[1] << " " << v[2] << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[1] << " " << n << endl;
        }
        
    }
    return 0;
}
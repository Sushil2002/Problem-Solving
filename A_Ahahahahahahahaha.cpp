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
        int n;
        cin >> n;
        vector<int> v(n);
        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        // cout<<cnt1<<" "<<cnt0<<endl;
        if (cnt1 == n)
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
        }
        else if (cnt0 == n)
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 0 << " ";
            }
        }
        else if (cnt1 == cnt0)
        {
            cout << n / 2 << endl;
            for (int i = 0; i < cnt0; i++)
            {
                cout << 0 << " ";
            }
        }
        else if (cnt1 > cnt0 && cnt1 % 2 == 0)
        {
            cout << cnt1 << endl;
            for (int i = 0; i < cnt1; i++)
            {
                cout << 1 << " ";
            }
        }
        else if (cnt1 > cnt0 && cnt1 % 2 != 0)
        {
            cout << cnt1 - 1 << endl;
            for (int i = 0; i < cnt1 - 1; i++)
            {
                cout << 1 << " ";
            }
        }
        else if (cnt0 > cnt1)
        {
            cout << cnt0 << endl;
            for (int i = 0; i < cnt0; i++)
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
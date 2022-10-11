#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt0 = 0;
        int A[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            m[A[i]]++;
            if (A[i] == 0)
            {
                cnt0++;
            }
        }
        bool flag = true;
        if (cnt0 > 0)
        {
            cout << n - cnt0 << endl;
        }
        else
        {
            for (auto &it : m)
            {
                if (it.second > 1)
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                cout << n  << endl;
            }
            else
            {
                cout << n + 1<< endl;
            }
        }
    }
    return 0;
}
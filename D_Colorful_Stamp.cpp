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
        string s;
        cin >> s;
        int cntr = 0, cntb = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                cntr++;
            }
            else if (s[i] == 'B')
            {
                cntb++;
            }
            else if (s[i] == 'W')
            {
                if ((cntr == 0 && cntb != 0) || (cntr != 0 && cntb == 0))
                {
                    flag = false;
                    break;
                }
                else
                {
                    cntr = 0;
                    cntb = 0;
                }
            }
        }
        if ((cntr == 0 && cntb != 0) || (cntr != 0 && cntb == 0))
        {
            flag = false;
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
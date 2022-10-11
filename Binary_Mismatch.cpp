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
        int j;
        cin >> j;
        string s;
        cin >> s;
        int n = s.length();
        int cnt0 = 0, cnt1 = 0;
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    cnt0++;
                }
                else
                {
                    cnt1++;
                }
            }
            int z = abs(cnt1 - cnt0) / 2;
            if (cnt1 == cnt0)
            {
                cout << "YES" << endl;
                cout << 1 << " " << n;
                cout << endl;
            }
            else if (cnt1 > cnt0)
            {
                cout << "YES" << endl;
                
                int L = 1, R;
                int cnt = 0;

                for (int i = 0; i < n; i++)
                {
                    
                    if (s[i] == '1')
                    {
                        z--;
                    }
                    else if (s[i] == '0')
                    {
                        z++;
                    }
                    if (z == 0)
                    {
                        R = i + 1;
                        break;
                    }
                }
                cout << L << " " << R << endl;
            }
            else
            {
                cout << "YES" << endl;
                int z = abs(cnt1 - cnt0) / 2;
                int L = 1, R;
                int cnt = 0;

                for (int i = 0; i < n; i++)
                {
                    
                    if (s[i] == '0')
                    {
                        z--;
                    }
                    else if (s[i] == '1')
                    {
                        z++;
                    }
                    if (z == 0)
                    {
                        R = i + 1;
                        break;
                    }
                }
                cout << L << " " << R << endl;
            }
        }
    }
    return 0;
}
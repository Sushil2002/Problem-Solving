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
        int ans = INT_MAX;
        for (int i = 0; i <= 15; i++)
        {
            int cnt = 0;
            int d = n + i;
            while (d)
            {
                if (d % 2 == 0)
                {
                    cnt++;
                    d = d / 2;
                }
                else
                {
                    break;
                }
            }
            ans = min(15 - cnt + i, ans);
        }
        if (n == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << ans << " ";
        }
    }
    
 
    return 0;
}
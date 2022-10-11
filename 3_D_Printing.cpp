#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        int c1, c2, c3, m3, m1, m2, y1, y2, y3, k1, k2, k3;
        cin >> c1 >> m1 >> y1 >> k1;
        int minc = c1;
        int minm = m1;
        int miny = y1;
        int mink = k1;
        cin >> c2 >> m2 >> y2 >> k2;
        if (minc > c2)
        {
            minc = c2;
        }
        if (minm > m2)
        {
            minm = m2;
        }
        if (miny > y2)
        {
            miny = y2;
        }
        if (mink > k2)
        {
            mink = k2;
        }
        cin >> c3 >> m3 >> y3 >> k3;
        if (minc > c3)
        {
            minc = c3;
        }
        if (minm > m3)
        {
            minm = m3;
        }
        if (miny > y3)
        {
            miny = y3;
        }
        if (mink > k3)
        {
            mink = k3;
        }
        int sum = minc + minm + mink + miny;
        if (sum < 1000000)
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            sum = minc;
            if (sum > 1000000)
            {
                cout << minc - (sum - 1000000) << " ";
            }
            else
            {
                cout << minc << " ";
            }
            if (sum > 1000000)
            {
                cout << 0 << " ";
            }
            else
            {
                sum += minm;
                if (sum > 1000000)
                {
                    cout << minm - (sum - 1000000) << " ";
                }
                else{
                    cout<<minm<<" ";
                }
            }
            /**/
            if (sum > 1000000)
            {
                cout << 0 << " ";
            }
            else
            {
                sum += miny;
                if (sum > 1000000)
                {
                    cout << miny - (sum - 1000000) << " ";
                }
                else{
                    cout<<miny<<" ";
                }
            }
            ///////////////
            if (sum > 1000000)
            {
                cout << 0 << " ";
            }
            else
            {
                sum += mink;
                if (sum > 1000000)
                {
                    cout << mink - (sum - 1000000) << " ";
                }
                else{
                    cout<<mink<<" ";
                }
            }
            cout << endl;

        }
    }
    return 0;
}
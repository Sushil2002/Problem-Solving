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
        ll r, c;
        cin >> r >> c;
        cout << "Case #" << i + 1 <<":"<< endl;
        int x = (2 * r) + 1;
        int y = (2 * c) + 1;
        char A[x][y];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (i == 0 || i % 2 == 0)
                {
                    if ((i + j) % 2 == 0)
                    {
                        A[i][j] = '+';
                    }
                    else
                    {
                        A[i][j] = '-';
                    }
                }
                else
                {
                    if ((i + j) % 2 == 0)
                    {
                        A[i][j] = '.';
                    }
                    else
                    {
                        A[i][j] = '|';
                    }
                }
            }
        }
        A[0][0] = '.';
        A[0][1] = '.';
        A[1][0] = '.';
        A[1][1] = '.';
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << A[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
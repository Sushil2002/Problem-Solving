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
        ll N, M;
        cin >> N >> M;
        ll A[N + 1][M + 1];
        ll x1, x2, y1, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        ll a = (x1 + x2) % 2;
        ll b = (y1 + y2) % 2;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                if ((x1 + y1) % 2 != 0)
                {
                    if ((i + j) % 2 == 0)
                    {
                        if (a == b)
                        {
                            A[i][j] = 3;
                        }
                        else
                        {
                            A[i][j] = 2;
                        }
                    }
                    else
                    {
                        A[i][j] = 1;
                    }
                }
                if ((x1 + y1) % 2 == 0)
                {
                    if ((i + j) % 2 == 0)
                    {
                        A[i][j] = 1;
                    }
                    else
                    {
                        if ((x1 + x2) % 2 == (y1 + y2) % 2)
                        {
                            A[i][j] = 3;
                        }
                        else
                        {
                            A[i][j] = 2;
                        }
                    }
                }
            }
        }
        A[x1][y1] = 1;
        A[x2][y2] = 2;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
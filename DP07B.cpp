#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
signed main()
{
    int m;
    cin >> m;
    int A[m][3];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                A[i][j] = A[i][j] + max(A[i - 1][2], A[i - 1][1]);
            }
            else if (j == 1)
            {
                A[i][j] = A[i][j] + max(A[i - 1][0], A[i - 1][2]);
            }
            else
            {
                A[i][j] = A[i][j] + max(A[i - 1][1], A[i - 1][0]);
            }
        }
    }
    cout<<max(A[m-1][0],max(A[m-1][1],A[m-1][2]));
    return 0;
}
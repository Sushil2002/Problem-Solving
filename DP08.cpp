#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Way(int i, int j, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
    {
        return 1;
    }
    if (i < 0 || j < 0)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int up = Way(i - 1, j, dp);
    int left = Way(i, j - 1, dp);
    return dp[i][j] = left + up;
}
signed main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    int x = Way(m - 1, n - 1, dp);
    cout << x << endl;
    return 0;
}
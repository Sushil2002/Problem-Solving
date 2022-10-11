// Triangle Problem

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Triangle(vector<vector<int>> &t, int i, int j, int n, vector<vector<int>> &dp)
{
    if (i == n - 1)
    {
        return t[n - 1][j];
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int down = t[i][j] + Triangle(t, i + 1, j, n, dp);
    int dia = t[i][j] + Triangle(t, i + 1, j + 1, n, dp);
    // return min(down,dia);
    return dp[i][j] = min(down, dia);
}
signed main()
{

    return 0;
}
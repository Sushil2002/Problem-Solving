#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Task(vector<vector<int>> &v, int last, int day, vector<vector<int>> &dp)
{
    if (day == 0)
    {
        int maxi = INT_MIN;
        for (int task = 0; task < 3; task++)
        {
            if (task != last)
            {
                maxi = max(maxi, v[0][task]);
            }
        }
        return maxi;
    }
    if (dp[day][last] != -1)
    {
        return dp[day][last];
    }
    int maxi = INT_MIN;
    for (int task = 0; task < 3; task++)
    {
        if (task != last)
        {
            int points = v[day][task] + Task(v, task, day - 1, dp);
            maxi = max(maxi, points);
        }
    }
    return dp[day][last] = maxi;
}
signed main()
{
    int m;
    cin >> m;
    vector<vector<int>> v(m);
    vector<vector<int>> dp(m, vector<int>(4, -1));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    int x = Task(v, 3, m - 1, dp);
    cout << x << endl;
    return 0;
}
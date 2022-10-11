#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
int Solve(vector<vector<int>> &nums, int i, int j)
{
    if (j < 0 || j >= nums[0].size())
    {
        return -1e9;
    }
    if (i == 0)
    {
        return nums[0][j];
    }

    int st = nums[i][j] + Solve(nums, i - 1, j);
    int rd = nums[i][j] + Solve(nums, i - 1, j + 1);
    int ld = nums[i][j] + Solve(nums, i - 1, j - 1);

    return max(st, max(rd, ld));
}
signed main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    Solve(v, n, m);
    int ans = -1e9;
    for (int i = 0; i < m; i++)
    {
        ans = max(ans, Solve(v, n - 1, i));
    }
    cout << ans << endl;
    return 0;
}
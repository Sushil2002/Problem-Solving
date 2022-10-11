#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
void Solve(vector<vector<int>> &nums, int n, int m)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                nums[i][j] += max(nums[i - 1][j], nums[i - 1][j + 1]);
            }
            else if (j == m - 1)
            {
                nums[i][j] += max(nums[i - 1][j], nums[i - 1][j - 1]);
            }
            else
            {
                nums[i][j] += max(nums[i - 1][j], max(nums[i - 1][j - 1], nums[i - 1][j + 1]));
            }
        }
    }
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
    Solve(v,n,m);
    int ans=INT_MAX;
    for(int i=0;i<m;i++)
    {
        ans=min(ans,v[n-1][i]);
    }
    cout<<ans<<endl;
    
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
vector<vector<int>> ans;
int temp = INT_MAX;
void Generate(int i, vector<int> &nums, vector<int> &sub)
{
    if (i >= nums.size())
    {
        ans.push_back(sub);
        return;
    }
    if (temp != nums[i])
    {
        sub.push_back(nums[i]);
        Generate(i + 1, nums, sub);
        sub.pop_back();
        temp = nums[i];
    }
    Generate(i + 1, nums, sub);
}
signed main()
{
    int n, t;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // sort(nums.begin(), nums.end());
    
        vector<int> sub;
        Generate(0, nums, sub);
        for (auto it : ans)
        {
            for (auto ele : it)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
    
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

void Permuatation(vector<int> &nums, vector<int> &ds, int freq[], vector<vector<int>> &ans)
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq[i] == 0)
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            Permuatation(nums, ds, freq, ans);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[n] = {0};
    Permuatation(nums, ds, freq, ans);
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
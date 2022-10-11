#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}

vector<vector<int>> ans;
void Generate(int i, vector<int> &ds, vector<int> &arr, int k, int target)
{
    if (ds.size() == k)
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (i >= 10)
    {
        return;
    }
    if (i <= target)
    {
        ds.push_back(i);
        Generate(i + 1, ds, arr, k, target - i);
        ds.pop_back();
    }
    Generate(i + 1, ds, arr, k, target);
}

// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main()
{
    int k, target;
    cin >> k >> target;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ds;
    sort(arr.begin(), arr.end());
    Generate(1, ds, arr, k, target);
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
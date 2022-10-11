#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
vector<vector<int>> ans;
vector<int> sub;

void Generate(int i, int target, vector<int> &nums)
{
    if(i>=nums.size()){
        if(target==0){
            ans.push_back(sub);
        }
        return;
    }
    if(nums[i]<=target){
        sub.push_back(nums[i]);
        Generate(i,target-nums[i],nums);
        sub.pop_back();
    }
    Generate(i+1,target,nums);
}
int main()
{

    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    Generate(0, t, v);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
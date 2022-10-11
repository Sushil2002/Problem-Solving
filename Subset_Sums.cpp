#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
vector<int>ans;
void Generate(int index,vector<int>&nums,vector<int>&sub){
    if(index>=nums.size()){
        int sum=0;
        for(auto it:sub){
            sum+=it;
        }
        ans.push_back(sum);
        return ;
    }
    sub.push_back(nums[index]);
    Generate(index+1,nums,sub);
    sub.pop_back();
    Generate(index+1,nums,sub);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>sub;
    
    Generate(0,v,sub);
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}
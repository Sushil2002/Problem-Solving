#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
vector<vector<int>>v1;
void Generate(vector<int>&subset,int i,vector<int>&nums){
    if(i==nums.size()){
        v1.push_back(subset);
        return;
    }
    Generate(subset,i+1,nums); 
    subset.push_back(nums[i]);
    Generate(subset,i+1,nums);
    subset.pop_back(); 
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>empty;
    Generate(empty,0,v);
    for(auto subsets: v1){
        for(auto ele: subsets){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    cout<<"[]"; //Empty Subset
    cout<<endl;
    //output the subsets!  (Do it!)
    return 0;
}
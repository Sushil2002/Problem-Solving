#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
bool ispalindrome(string str){
    int len = str.length();
    for (int i = 0; i < len / 2; i++){
        if (str[i] != str[len - i - 1])
        return false;
    }
    return true;
}
bool issort(ll A[], ll n)
{
    for (ll i = 0; i < n - 1; i++){
        if (A[i] > A[i + 1]){
            return false;
        }
    }
    return true;
}
vector<vector<string>>ans;
void Permuatation(int i,vector<int>&ds,vector<int>&nums,int A[])
{
    if(ds.size()==nums.size()){
        
    }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
    }
    return 0;
}
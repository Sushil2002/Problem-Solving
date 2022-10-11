#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
int Generate(int index,int arr[],int n,int k,int sum)
{
    if(index==n){
        if(sum==k){
            return 1;
        }else
            return 0;
    }
    
    sum+=arr[index];
    int l=Generate(index+1,arr,n,k,sum);
    sum-=arr[index];
    int r=Generate(index+1,arr,n,k,sum);
    return l+r;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
int main(){
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int sum = 0;
    vector<int> ds;
    cout<<Generate(0, A, n, k, sum);
    return 0;
}
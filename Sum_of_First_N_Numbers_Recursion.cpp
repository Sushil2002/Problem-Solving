#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
int Solve(int n,int sum)
{
    if(n<0){
        return sum;
    }
    sum+=n;
    Solve(n-1,sum);
}
int main(){
    
    int n;
    cin>>n;
    int sum=0;
    cout<<Solve(n,sum);
    return 0;
}
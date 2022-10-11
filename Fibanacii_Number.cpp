#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
int fab(int n)
{
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fab(n-1)+fab(n-2);
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
int main(){
    int n;
    cin>>n;
    cout<<fab(n);
    return 0;
}
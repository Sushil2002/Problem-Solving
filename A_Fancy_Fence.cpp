#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(360%(180-a)!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void solve()
{
    int n;
    cin>>n;
    int a=n;
    double sum=0;
    while(n--){
        double x;
        cin>>x;
        sum+=x/100;
    }
    // double y=sum*100;
    double z=(sum*100)/a;
    cout<<setprecision(12)<<z<<endl;
}
int main(){
    solve();
    return 0;
}
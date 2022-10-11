#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
signed main(){
    int y;
    cin>>y;
    while(1){
        y++;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout<<y<<endl;
    return 0;
}
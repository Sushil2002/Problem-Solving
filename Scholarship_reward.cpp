#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
int main(){
    int t;
    cin>>t;
    while(t--){
        int f,r;
        cin>>f>>r;
        if(r>=1 && r<=3){
            cout<<0<<endl;
        }
        else if(r>=4 && r<=10){
            int z=(f*3)/4;
            cout<<f-z<<endl;
        }
        else if(r>=11 && r<=50){
            if(f%2!=0)
                cout<<(f/2)+1<<endl;
            else
                cout<<f/2<<endl;
        }else{
            cout<<f<<endl;
        }
    }
    return 0;
}
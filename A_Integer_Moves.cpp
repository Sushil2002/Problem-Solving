#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool isPerfectSquare(long double x)
{
    float y=sqrt(x);
    if(ceil(x)==floor(x)){
        return true;
    }else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        float x,y;
        cin>>x>>y;
        bool flag=false;
        float x1=pow(x,2);
        float y1=pow(y,2);
        float z=sqrt(x1+y1);
        if(x==0 && y==0){
            cout<<0<<endl;
        }
        else{
            if(isPerfectSquare(z)){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
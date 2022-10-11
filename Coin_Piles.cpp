#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    ll t=1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if((a+b)%3==0)
        {
            int z=(a+b)/3;
            if(abs(a-b)<=z){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


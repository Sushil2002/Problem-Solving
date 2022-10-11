#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        ll sum1=x*a+y*a;
        if(x>y){
            swap(x,y);
        }
        ll sum2=(y-x)*a+x*b;
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}
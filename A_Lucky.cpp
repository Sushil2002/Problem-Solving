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
        ll n;
        cin >> n;
        ll x=n;
        ll p = 3;
        ll sum1 = 0, sum2 = 0;
        while (p--)
        {
           
            sum1 += (n % 10);
            n = n / 10;
        }
        n=(x)/1000;
        while(n!=0){
            sum2+=(n%10);
            n=n/10;
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
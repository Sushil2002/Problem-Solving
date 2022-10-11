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
        ll A[n];
        ll cntp = 0, cntn = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] == 1)
            {
                cntp++;
            }
            else
            {
                cntn++;
            }
        }
        if(cntp==n || cntp==n){
            cout<<"No"<<endl;
        }
        else if(abs(cntp-cntn)<2){
            cout<<"Yes"<<endl;
        }
        else if(abs(cntp-cntn)==2 && cntp%2==0 && cntn%2==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
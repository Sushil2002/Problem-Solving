#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll x = 0, y = 0,z=0;
        ll A[n];
        for(int i=1;i<n+1;i++){
            cin>>A[i];
        }
        for (ll i = 1; i < n + 1; i++)
        {
            if (A[i] % a == 0)
            {
                x++;
            }
            if (A[i] % b == 0)
            {
                y++;
            }
            if(A[i] % a == 0 && A[i] % b == 0){
                z++;
            }
        }
        //cout<<x<<" "<<y<<endl;
        if(z>0){
            x++;
        }
        if(x>y){
            cout<<"BOB"<<endl;

        }else{
            cout<<"ALICE"<<endl;
        }
    }
    return 0;
}
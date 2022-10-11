#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve()
{
    bool flag=false;
        int n;
        cin>>n;
        
        int z=n%10 , ans =0;
        n=n/10;
        while(n>0)
        {  ans = n% 10;
            if(z%2==ans%2){
                flag = true;
            }
            n /= 10 ;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
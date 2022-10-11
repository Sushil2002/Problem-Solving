#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false; 
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(isPrime(n)){
            cout<<1<<" "<<n-1<<endl;
        }
        else if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }else{
            for(int i=2;i<=n;i++){
                if(n%i==0){
                    cout<<n/i<<" "<<n-n/i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if(N==2){
            cout<<2<<endl;
        }else if(N==1){
            cout<<1<<endl;
        }
        else{
            if(isPrime(N)){
                cout<<3<<endl;
            }else{
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
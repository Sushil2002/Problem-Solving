#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

int main()
{ 
      ll n;
      cin>>n;
      cout<<n<<" ";
      while(n!=1){
            if(n%2==0){
                  cout<<n/2<<" ";
                  n=n/2;
            }else{
                  cout<<(3*n)+1<<" ";
                  n=3*n+1;
            }
      }
      return 0;
}

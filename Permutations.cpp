#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

int main(){
      ll n;
      cin>>n;
      if(n<=3 && n>1){
            cout<<"NO SOLUTION"<<endl;
      }else if(n==4){
          cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
      }
      else{
            ll A[n];
            int j=1;
            for(int i=0;i<n;i+=2){
                  A[i]=j;
                  j++;
            }
            int max=j;
            for(int i=1;i<n;i+=2){
                  A[i]=max;
                  max++;
            }
            for(int i=0;i<n;i++){
                  cout<<A[i]<<" ";
            }
            cout<<endl;
      }
      return 0;
}
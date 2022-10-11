#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll A[n];

        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0,j=n-1;i<j;)
        {
            if(A[i]<0){
                i++;
            }if(A[j]>0){
                j--;
            }
            else if(A[i]>0 && A[j]<0){
                A[i]=-A[i];
                A[j]=-A[j];
            }
        }
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1]){
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool issort(int A[],int n)
{
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int A[n],B[n];
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
            if(B[i]==1){
                cnt1++;
            }else{
                cnt0++;
            }
        }
        
        if(issort(A,n)){
            cout<<"Yes"<<endl;
        }
        else if(!issort(A,n) && (cnt0==n)){
            cout<<"No"<<endl;
        }
        else if(!issort(A,n) && (cnt1==n)){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }

    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int Sum(int A[],int i,int n)
{
    if(n==0){
        return 0;
    }
    return A[i]+Sum(A,++i,n-1);
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<Sum(A,0,n);
    return 0;
}
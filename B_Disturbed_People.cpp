#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int sum=0;
    for(int i=0;i<n;){
        if(A[i]==0 && A[i+1]==1 && A[i-1]==1){
            sum++;
            i+=3;
        }else{
            i++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
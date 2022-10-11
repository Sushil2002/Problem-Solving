#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    if(even==1){
        for(int i=0;i<n;i++){
            if(A[i]%2==0){
                cout<<i+1<<endl;
            }
        }    
    }else{
        for(int i=0;i<n;i++){
            if(A[i]%2!=0){
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}
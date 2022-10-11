#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll A[n];
        ll B[n];
        ll sum=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        for(int i=0;i<n;i++){
            if(A[i]>B[i]){
                swap(A[i],B[i]);
            }
        }
        vector<ll>v1,v2;
        for(int i=0;i<n-1;i++){
            v1.push_back(abs(A[i]-A[i+1]));
        }
        for(int i=0;i<n-1;i++){
            v2.push_back(abs(B[i]-B[i+1]));
        }
        for(int i=0;i<v1.size();i++){
            sum+=v1[i];
        }
        for(int i=0;i<v2.size();i++){
            sum+=v2[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
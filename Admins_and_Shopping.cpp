#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int Ceil(ll a,ll b){
    if(a%b==0){
        return a/b;
    }else{
        return a/b+1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n);
        int min=A[0];
        //Inbulid cei Cannot be used!
        int ans=Ceil(x,min);
        int z=max(ans,n);
        cout<<z<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n*k==1)
        {
            cout<<"YES"<<endl;
            cout<<1<<endl;
        }
        else if(n*k==3)
        {
            cout<<1<<endl<<2<<endl<<3<<endl;
        }
        else if((n*k)%2!=0){
            cout<<"NO"<<endl;
        }
        else if(n>500 || k>500){
            cout<<"NO"<<endl;
        }
        else{
            int z=n*k;
            for(int i=1;i<=k+1;i++){
                for(int j=i+1;j<=n;j++){
                    cout<<i<<" "<<j;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
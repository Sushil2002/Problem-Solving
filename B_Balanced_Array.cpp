#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=2;
        int A[n];
        int sum=0;
        for(int i=0;i<n/2;i++){
            A[i]=a;
            a+=2;
            sum+=A[i];
        }
        int j=0;
        int sum2=0;
        for(int i=n/2;i<n-1;i++){
            A[i]=A[j]-1;
            sum2+=A[i];
            j++;
        }
        int z=sum-sum2;
        A[n-1]=z;
        // for(int i=0;i<n;i++){
        //         cout<<A[i]<<" ";
        //     }
        //     cout<<endl;
        //     cout<<endl;
        // cout<<z<<endl;
        if(z%2!=0){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
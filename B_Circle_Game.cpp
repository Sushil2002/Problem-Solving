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
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m=INT_MAX;
        int x;
        for(int i=0;i<n;i++){
            if(A[i]<m){
                m=A[i];
                x=i;
            }
        }

        if(n%2!=0){
            cout<<"Mike"<<endl;
        }else{
            if(x%2==0){
                cout<<"Joe"<<endl;
            }else
                cout<<"Mike"<<endl;
        }
    }
    return 0;
}
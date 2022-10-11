#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int j=0;
        char A[40];
        for(int i=10;i<=36;i++){
            A[i]='A'+j;
            j++;
        }
        while(n>36){
            v.push_back(n%36);
            n=n/10;
        }
        v.push_back(n%36);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]>=10){
                cout<<A[v[i]];
            }else{
                cout<<v[i];
            }

        }
        cout<<endl;
    }
    return 0;
}
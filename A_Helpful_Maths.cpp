#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    char A[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        A[i]=s[i];
        if(s[i]!='+'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    int j=0;
    for(int i=0;i<n;i++){
        if(A[i]!='+'){
            A[i]=v[j];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i];
    }
    cout<<endl;

    return 0;
}
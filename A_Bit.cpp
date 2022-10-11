#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int sum=0;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            sum++;
        }else{
            sum--;
        }
        
    }
    cout<<sum<<endl;
    // int sum1=0,sum2=0;
    // for(int i=0;i<n;i++){
    //     if(v[i]=="++X" || v[i]=="X++"){
    //         sum1++;
    //     }else{
    //         sum2++;
    //     }
    // }
    // cout<<abs(sum1-sum2)<<endl;
    return 0;
}
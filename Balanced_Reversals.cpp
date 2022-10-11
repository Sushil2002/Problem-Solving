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
        string s,r;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'){
                r=r+s[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){
                r=r+s[i];
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
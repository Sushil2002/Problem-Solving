#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    ll lower=0,upper=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=65 && s[i]<91){
            upper++;
        }else{
            lower++;
        }
    }
    if(lower>upper)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else if(lower<upper)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    return 0;
}
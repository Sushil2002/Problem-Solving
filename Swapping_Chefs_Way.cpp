#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r=s;
        sort(r.begin(),r.end());
        for (int i = 0,j=n-1; i <j; i++,j--)
        {
            if(s[i]>s[j])
                swap(s[i],s[j]);
        }
        if(r==s){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
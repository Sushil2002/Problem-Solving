#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int z=s[0]-96;
        if(z==1)
        {
            int x=s[1]-96;
            cout<<x-1<<endl;
        }else{
            z=(z-1)*25;
            int x=s[1]-96;
            if(s[1]>s[0]){
                x--;
            }
            cout<<z+x<<endl;
        }
        
    }
    return 0;
}
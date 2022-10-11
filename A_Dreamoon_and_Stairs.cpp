#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int z=(n/2)+n%2;
    int a=z;
    if(m>n){
        cout<<-1<<endl;
    }
    else{
        while(a--)
        {
            if(z%m==0){
                break;
            }
            z=z-1;
            z+=2;
        }
        cout<<z<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin>>A>>B;
        int x=(A)*10;
        int y=(B/2)*10;
        if(x>y){
            cout<<"FIRST"<<endl;
        }else if(x==y){
            cout<<"ANY"<<endl;
        }else{
            cout<<"SECOND"<<endl;
        }
    }
    return 0;
}
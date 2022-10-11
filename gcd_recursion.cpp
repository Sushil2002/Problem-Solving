#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
//Does'nt matter whic h is greather
//(12,18) and (18,12) Gives same gcd
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    gcd(b%a,a);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
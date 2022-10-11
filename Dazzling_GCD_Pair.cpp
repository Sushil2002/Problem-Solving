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
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            int i = a;
            int j = i + 2;
            if (__gcd(i, j) > 1 && j <= b)
            {
                cout << i << " " << j << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if(a%3==0)
        {
            int i=a;
            int j=a+3;
            if(j<=b){
                cout<<i<<" "<<j<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
        else
        {
            int i = a + 1;
            int j = i + 2;
            if (j <= b)
            {
                cout << i << " " << j << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        
    }
    
    return 0;
}
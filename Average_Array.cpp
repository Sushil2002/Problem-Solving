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

        int n, x;
        cin >> n >> x;
        vector<int>v;
        int sum = n * x;
        int sum1 = 0;
        if (n == 1)
        {
            cout << x << endl;
        }
        else
        {
           for(int i=0;i<n/2;i++){
               cout<<x+i+1<<" "<<x-i-1<<" ";
           }
           if(n%2!=0){
               cout<<x;
           }
           cout<<endl; 
        }
    }
    return 0;
}
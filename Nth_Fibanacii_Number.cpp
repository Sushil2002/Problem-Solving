

// to Find the Nth Fibanacii Term in the Sequenece!

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

// 1,2,3,4,5,6,7, 8, 9,.............
// 0,1,1,2,3,5,8,13,21,34,55,89

// f8 =  f7+ f6

// f5 =  f4+f3
int Fab(int n) // n=Nth term!
{
    if (n <= 1)
    {
        return n;
    }
    return Fab(n - 1) + Fab(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << Fab(n-1) << endl;
    return 0;
}
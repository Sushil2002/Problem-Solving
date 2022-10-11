#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    if (a <= b)
    {
        while (a <= b)
        {
            a = a * 3;
            b = b * 2;
            cnt++;
        }
    }
    else
    {
        cnt = 0;
    }
    cout << cnt << endl;
    return 0;
}
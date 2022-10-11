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
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        ll aloce = 0, bob = 0;
        int res = 0;
        int i = 0, j = n - 1;
        bool f1 = false;
        bool f2 = false;
        while (i < j)
        {
            if (f1 == false)
            {
                aloce += A[i];
            }
            if (f2 == false)
            {
                bob += A[j];
            }
            if (aloce < bob)
            {
                i++;
                f2 = true;
                f1=false;
            }
            else if (bob < aloce)
            {
                j--;
                f1 = true;
                f2=false;
            }
            
            else
            {
                res = max(res, i + n - j +1);
                f1 = false;
                f2 = false;
                i++;
                j--;
            }
        }
        cout << res << endl;
    }
    return 0;
}
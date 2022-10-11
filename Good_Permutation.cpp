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
        if (n % 2 != 0)
        {
            if (n == 1 || n == 3)
                cout << -1 << endl;
            else
            {
                cout << "3 5 1 2 4 ";
                for (int i = n; i >= 6; i--)
                {
                    cout << i << " ";
                }
                cout << "\n";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                A[i] = i + 1;
            }
            for (int i = 0; i < n; i += 2)
            {
                swap(A[i], A[i + 1]);
            }
            for (int i = 0; i < n; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
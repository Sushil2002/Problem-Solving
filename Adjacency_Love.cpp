#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve(int n)
{
    int A[n];
    vector<int> v1, v2;
    int cnte = 0, cnto = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] % 2 == 0)
        {
            cnte++;
            v1.push_back(A[i]);
        }
        else
        {
            cnto++;
            v2.push_back(A[i]);
        }
    }
    if (0 == v2.size() || (0 == v1.size() && n % 2 != 0))
    {
        cout << -1 << endl;
    }
    
    else
    {
        if (v1.size() > n - 2)
        {
            cout << -1 << endl;
        }
        else
        {
            long long int m;
            if (v2.size() % 2 != 0)
            {
                m = v2.size() - 1;
            }
            else
            {
                m = v2.size();
            }
            for (int i = 0; i < m; i++)
            {
                cout << v2[i] << " ";
            }
            for (int i = 0; i < v1.size(); i++)
            {
                cout << v1[i] << " ";
            }
            if (m < v2.size())
            {
                cout << v2[m];
            }
            cout << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
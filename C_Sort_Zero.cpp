#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}
int Solve(int n, vector<int> &A)
{
    int temp = n - 2;
    map<int, int> m1;
    m1[A[n - 1]] = n - 1;
    for (temp = n - 2; temp >= 0; temp--)
    {
        if (A[temp] > A[temp + 1])
        {
            break;
        }
        else
        {
            if (m1.find(A[temp]) == m1.end())
            {
                m1[A[temp]] = temp;
            }
        }
    }
    int res = 0;
    int ul = temp;
    for (int j = 0; j <= temp; j++)
    {
        auto it = m1.find(A[j]);
        if (it != m1.end())
        {
            ul = max(ul, it->second);
        }
    }
    map<ll, ll> m2;
    for (int k = 0; k <= ul; k++)
    {
        if (m2.find(A[k]) == m2.end())
        {
            res++;
            m2[A[k]] = k;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int temp = 0; temp < n; temp++)
        {
            cin >> A[temp];
        }
        cout << Solve(n, A);
        cout << endl;
    }
}

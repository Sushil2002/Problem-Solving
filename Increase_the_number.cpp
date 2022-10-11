#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            v1.push_back(A[i]);
        }
        if (A[n - 2] == A[n - 1])
        {
            sort(A, A + n);
            for (int i = 0; i < n; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
        else
        {

            swap(A[n - 2], A[n - 1]);
            for (int i = 0; i < n; i++)
            {
                cout << A[i] << " ";
            }
            cout<<endl;
        }
    }
    return 0;
}
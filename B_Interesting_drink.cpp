#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<int, int> &A, const pair<int, int> &b)
{
    return A.second < b.second;
}
int main()
{
    int n, q, k;
    int ans;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A, A + n);
    cin >> q;
    while (q--)
    {
        cin >> k;
        ans=upper_bound(A,A+n,k)-A;
        cout<<ans<<endl;
    }
    return 0;
}
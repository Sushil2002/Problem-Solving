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
        bool A[n + 1] = {0};
        vector<int> v;
        // v.push_back(1);
        for (int i = 1; i <= n; i++)
        {
            int j = i;
            if (A[j] == 0)
            {
                while (j <= n)
                {
                    A[j] = 1;
                    v.push_back(j);
                    j = j * 2;
                }
            }
        }
        cout << 2 << endl;
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
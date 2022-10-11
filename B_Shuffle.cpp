#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool ispalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
bool issort(ll A[], ll n)
{
    for (ll i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }
    return true;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, m;
        cin >> n >> x >> m;
        int a = x;
        int b = x;
        
        int cnt = 1;
        bool aj = false;
        for (int i = 0; i < m; i++)
        {
            int l,r;
            cin >> l >> r;
            if(l<=a && r>=a){
                a=min(a,l);
            }
            if(r>=b && l<=b){
                b=max(b,r);
            }
        }
        cout << b-a + 1 << endl;
    }
    return 0;
}
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
    ll len = str.length();
    for (ll i = 0; i < len / 2; i++)
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll A[n + 1];
        map<ll,ll>m;
        for (ll i = 1; i <= n; i++)
        {
            cin >> A[i];
            m[A[i]-i]++;
        }
        // for(auto it:m){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        ll ans=0;
        for(auto it:m){
            ll x=it.second;
            ans+=x*(x-1)/2;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
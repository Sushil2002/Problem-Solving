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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> s;
    for (ll i = 1; i < n; i++)
    {
        ll t=v[i]-v[i-1];
        if(t>x){
            s.push_back(t);
        }
    }
    vector<ll> c;
    for(auto it:s){
        c.push_back((it-1)/x);
    }
    sort(c.begin(),c.end());
    ll sum=0;
    ll cnt=0;
    for(auto it:c){
        sum+=it;
        if(sum>k){
            break;
        }
        cnt++;
    }
    
    cout<<c.size()-cnt+1<<endl;
    return 0;
}
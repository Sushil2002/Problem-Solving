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
signed main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        b=i;
        ll f = x - v[i];
        auto it = m.find(f);
        if (it == m.end())
        {
            m[v[i]]=i;
        }
        else
        {
            a = m[f];
            break;
        }
    }
    if((a+1)==(b+1)){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    else if(v[a]+v[b]==x){
    cout << a+1 << " " << b+1 << endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    return 0;
}
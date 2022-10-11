#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void solve(string &s1, string &s2)
{
    bool aj = false;
    int n = s1.length();
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[n - i-1])
        {
            aj = true;
            break;
        }
    }
    if (aj)
    {
        cout << "NO"
             << endl;
    }else{
        cout<<"YES"<<endl;
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    solve(s1,s2);
    return 0;
}
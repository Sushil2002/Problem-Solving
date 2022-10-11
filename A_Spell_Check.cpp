#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        bool aj = true;
        if (n != 5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            string str="Timur";
            sort(str.begin(),str.end());
            sort(s.begin(),s.end());
            if(str!=s){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
        
    }
    return 0;
}
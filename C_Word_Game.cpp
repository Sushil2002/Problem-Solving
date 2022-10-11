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
        int x = 3;
        map<string, int> mp;
        vector<string>v;
        for (int i = 0; i < 3*n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
            v.push_back(s);
        }
        int a=0,b=0,c=0;
        int cnt=0;
        for(auto it:v){
            cnt++;
            string s=it;
            int x=mp[s];
            if(cnt<=n){
                if(x==2){
                    a+=1;
                }else if(x==1){
                    a+=3;
                }
            }else if(cnt>n and cnt<=2*n){
                if(x==2){
                    b+=1;
                }else if(x==1){
                    b+=3;
                }
            }else{
                if(x==2){
                    c+=1;
                }else if(x==1){
                    c+=3;
                }
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
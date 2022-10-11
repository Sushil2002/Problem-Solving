#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    vector<string> v;
    map<string, int> m;
    int n;
    cin >> n;
    bool flag = true;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
        v.push_back(s);
        v.push_back(t);
        if(s!=t){
            m[s]++;
            m[t]++;
        }else{
            m[s]++;
        }
    }
    for (int i = 0; i < v.size(); i+=2)
    {
        if (m[v[i]] > 1)
        {
            if(m[v[i+1]]>1){
                flag=false;
            }
        }
    }
    if(flag){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}

    return 0;
}
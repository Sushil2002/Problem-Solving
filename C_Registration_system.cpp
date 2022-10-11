#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// bool ispresent(vector<string> v, string x)
// {
//     for (ll i = 0; i < v.size(); i++)
//     {
//         if (x == v[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
int main()
{
    ll t;
    cin >> t;
    map<string,ll>m;
    while (t--)
    {
        string s;
        cin >> s;
        m[s]++;
        for(auto it=m.find(s);it!=m.end();++it){
            if((it->second)==1){
                cout<<"OK"<<endl;
                break;
            }else{
                cout<<s<<(it->second)-1<<endl;
                break;
            }
        }
    }
    

    return 0;
}
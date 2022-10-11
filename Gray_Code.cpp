#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s(n, '0');
    vector<string> v;
    // v.push_back(s);
    map<string, int> m;
    double x = pow(2, n);
    while (v.size() != x)
    {
        string curr = s;
        for (int i = 0; i < n; i++)
        {
            if (curr[i] == '0')
            {
                curr[i] = '1';
            }
            else
            {
                curr[i] = '0';
            }
            auto it = m.find(curr);
            if (it == m.end())
            {
                m.insert({curr, 0});
                v.push_back(curr);
                s = curr;
                break;
            }
            if (curr[i] == '0')
            {
                curr[i] = '1';
            }
            else
            {
                curr[i] = '0';
            }
        }
    }
    for(auto it:v){
        cout<<it<<endl;
    }
    return 0;
}

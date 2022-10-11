#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{

    int t;
    cin >> t;
    map<int, vector<string>> m;
    for (int i = 0; i < t; i++)
    {
        string str;
        ll mr;
        cin >> str >> mr;
        m[mr].push_back(str);
    }
    for (auto it = m.rbegin(); it != m.rend(); it++)
    {
        sort((*it).second.begin(), (*it).second.end());
        for (auto &c : (*it).second)
        {
            cout << c << " " << (*it).first << endl;
        }
    }
    return 0;
}
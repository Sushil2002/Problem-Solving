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
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int cnt1 = 0, cnt0 = 0;
        char A[n][m];
        int j = 0;
        for (auto it : v)
        {
            string str = it;
            // cout << it << " " << endl;
            for (int i = 0; i < m; i++)
            {
                A[j][i] = str[i];
                if (A[j][i] == '1')
                {
                    cnt1++;
                }
            }
            j++;
        }
        // cout<<cnt1<<endl;
        // for(int i=0;i<n;i++){
        //     for(int k=0;k<m;k++){
        //         cout<<A[i][k]<<" ";
        //     }
        //     cout<<endl;
        // }
        if (cnt1 == 0)
        {
            cout << 0 << endl;
        }
        else if (cnt1 == (n * m))
        {
            cout << cnt1 - 2 << endl;
        }
        else
        {
            int x = 3;
            bool aj = false;
            for (int i = 0; i < n; i++)
            {
                for (int k = 0; k < m; k++)
                {
                    int cnt = 0;
                    int cnts = 0;
                    if (A[i][k] == '0')
                    {
                        cnt++;
                        if (k - 1 >= 0)
                        {
                            if (A[i][k - 1] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                        if (k + 1 < m)
                        {
                            if (A[i][k + 1] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                        if (i + 1 < n)
                        {
                            if (A[i + 1][k] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                        if (i - 1 >= 0)
                        {
                            if (A[i - 1][k] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                        if (i - 1 >= 0 and k - 1 >= 0)
                        {
                            if (A[i - 1][k - 1] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                        if (i + 1 < n and k - 1 >= 0)
                        {
                            if (A[i + 1][k - 1] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                        if (i - 1 >= 0 and k + 1 < m)
                        {
                            if (A[i - 1][k + 1] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                        if (i + 1 < n and k + 1 < m)
                        {
                            if (A[i + 1][k + 1] == '0')
                            {
                                cnt++;
                            }
                            else
                            {
                                cnts++;
                            }
                        }
                    }
                    if (cnts > 0)
                    {
                        if (cnt >= 2)
                        {
                            x = 1;
                            break;
                        }
                        else if (cnt == 1)
                        {
                            x = 2;
                        }
                    }
                }
                if (x == 1)
                {
                    break;
                }
            }
            cout << cnt1 - x + 1 << endl;
        }
    }
    return 0;
}
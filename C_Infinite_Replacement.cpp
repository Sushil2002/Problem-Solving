#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;
        int cnt = 0;
        int n1 = s.length();
        int n2 = t.length();
        int cnta = 0;
        int res=1;
        for (int i = 0; i < n1; i++)
        {
            if (s[i] == 'a')
            {
                cnt++;
            }
        }
        for (int i = 0; i < n2; i++)
        {
            if (t[i] == 'a')
            {
                cnta++;
            }
        }
        if(cnta>0)
        {
            if(n2==1){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            ll ans=pow(2,n1);
            cout<<res+ans-1<<endl;
        }
    }
    return 0;
}
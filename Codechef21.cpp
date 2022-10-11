
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
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;

        cin >> n >> k;
        string s;
        vector<ll> v(n + 1, 0);
        queue<ll> q;
        ll k1 = k;
        cin >> s;
        ll op = 0;
        int m = 0;
        ll ip = 0;
        while (ip < n)
        {
            if (ip + k - 1 >= n)
            {
                break;
            }
            k1 = k;
            while (k1-- && ip < n)
            {
                if (ip + k - 1 >= n)
                {
                    break;
                }
                if (m % 2 == 0)
                {

                    if (s[ip] == '1')
                    {
                        op++;
                        m++;
                        q.push(ip + k);
                        v[ip]++;
                        if (ip + k < n)
                        {
                            // cout<<ip<<" "<<ip+k<<endl;
                            v[ip + k]--;
                        }
                        ip++;
                        break;
                    }
                }
                else
                {
                    if (s[ip] == '0')
                    {
                        op++;
                        m++;
                        q.push(ip + k);
                        v[ip]++;
                        if (ip + k < n)
                        {
                            // cout<<ip<<" "<<ip+k<<endl;
                            v[ip + k]--;
                        }
                        ip++;
                        break;
                    }
                }
                if (op == n - k + 1 || ip + k - 1 >= n)
                {
                    break;
                }
                ip++;
                if (!q.empty())
                {
                    if (ip == q.front())
                    {
                        // cout<<"mkd"<<m<<" "<<ip<<endl;
                        m--;
                        q.pop();
                    }
                }
                k1--;
            }
            // cout<<"qfront "<<ip<<" "<<q.front()<<endl;
            if (!q.empty())
            {
                if (ip == q.front())
                {
                    // cout<<"mkd"<<m<<" "<<ip<<endl;
                    m--;
                    q.pop();
                }
            }

            if (op == n - k + 1 || ip + k - 1 >= n)
            {
                break;
            }
        }
        //cout << "kwnd" << ip << endl;
        // cout<<"kjabfw";
        // for (auto it : v)
        // {
        //     cout << it << " ";
        // }
        // cout << endl;

        for (int i = 1; i < n; i++)
        {
            v[i] = v[i] + v[i - 1];
        }
        // for (auto it : v)
        // {
        //     cout << it << " ";
        // }
        for (int i = 0; i < ip; i++)
        {
            cout << 0;
        }
        for (int i = ip; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (v[i] % 2 == 0)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (v[i] % 2 == 0)
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
        }
        // ll i=ip-1;
        // cout<<"ii"<<ip<<endl;
        // cout<<"jj"<<op<<endl;
        // int cnt=0;
        // while(i<n){

        //     if(op%2==0){
        //         if(s[i]=='0'){
        //             break;
        //         }
        //     }else{
        //         if(s[i]=='1'){
        //             break;
        //         }
        //     }
        //     cnt++;
        //     if(cnt==k-1){
        //         break;
        //     }
        //     i++;
        // }
        // i=min(i,n);
        // ll j=0;
        // for(j=0;j<=i;j++){
        //     cout<<0;
        // }
        // for(ll k=j;k<n;k++){
        //     cout<<s[k];
        // }
        cout << endl;
    }
    return 0;
}
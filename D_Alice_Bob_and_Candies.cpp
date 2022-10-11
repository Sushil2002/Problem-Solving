#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a;
        deque<ll> q;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            q.push_back(a);
        }
        ll alice = q.front();
       
       
        ll bob = 0;
        ll moves = 0;
        ll alice_total=0,bo=0;
        alice_total=q.front();
         q.pop_front();
        int p = -1;
        while (q.size()>0)
        {
            if (p == -1)
            {
                bob=0;
                while (bob <= alice && q.size() > 0)
                {
                    bob += q.back();
                    q.pop_back();
                }
                bo+=bob;
                moves++;
            }
            else
            {
                alice=0;
                while (alice <= bob && q.size() > 0)
                {
                    alice += q.front();
                    q.pop_front();
                }
                alice_total+=alice;
                moves++;
            }
            p = p * -1;
        }
        cout << moves+1 << " " << alice_total << " " << bo << endl;
    }
    return 0;
}
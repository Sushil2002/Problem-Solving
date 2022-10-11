#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<char>m;
        int k;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            char a;
            cin>>a;
            m.insert(a);
        }
        ll ans=0,dif=0;
        for(int i=0;i<n;i++)
        {
            if(m.find(s[i])!=m.end())
            {
                ans=max(ans,i-dif);
                dif=i;
            }
            //cout<<dif<<endl;
        }
        cout<<ans<<endl;
    }
    // return 0;
}
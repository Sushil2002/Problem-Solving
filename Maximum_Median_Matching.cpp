#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1(n+1), v2(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> v2[i];
        }
        vector<int> ans;
        sort(v2.begin(), v2.end());
        sort(v1.begin(), v1.end());
        int j = (n / 2) ;
        for (int i = 1; i <= (n/2); i++)
        {
            ans.push_back(v1[i] + v2[j]);
            j--;
        }
        j=n;
        for(int i=n/2+1;i<=n;i++)
        {
            ans.push_back(v1[i]+v2[j]);
            j--;
        }
        sort(ans.begin(),ans.end());
        cout<<ans[n/2]<<endl;
        
    }
    return 0;
}
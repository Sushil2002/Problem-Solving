#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll solve(int ind,int tar,vector<ll>a,vector<vector<ll>>dp)
{
    if(ind==0)
        return (tar%a[0]==0);
    if(dp[ind][tar]!=-1)
        return dp[ind][tar];
    ll temp1=solve(ind-1,tar,a,dp);
    ll temp2=0;
    if(a[ind]<=tar)
        temp2=solve(ind,tar-a[ind],a,dp);
    return dp[ind][tar]=temp1+temp2;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<ll>a;
	    for(int i=0;i<n;i++)
	    {
	        ll g;
	        cin>>g;
	        a.push_back(g);
	    }
	    ll v;
	    cin>>v;
	    vector<vector<ll>>dp(n,vector<ll>(v+1,-1));
	    for(int ind=1;ind<n;ind++)
	    {
	        for(int tar=0;tar<=v;tar++)
	        {
	            ll temp1=solve(ind-1,tar,a,dp);
                ll temp2=0;
                if(a[ind]<=tar)
                {
                    temp2=solve(ind,tar-a[ind],a,dp);
                }
                dp[ind][tar]=temp1+temp2;
	        }
	    }
	    ll ans=dp[n-1][v];
	    cout<<ans<<endl;
	}
	return 0;
}
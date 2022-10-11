#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int X,Y;
	    cin>>X>>Y;
	    vector<char>v1;
	    if(X%2!=0 && Y%2!=0)
	    {
	        cout<<-1<<"\n";
	    }
	    else{
	        
	        for(int i=0;i<X/2;i++)
	        {
	            v1.push_back('a');
	        }
            for(int i=0;i<Y/2;i++)
	        {
	            v1.push_back('b');
	        }
	        if((X+Y)%2!=0)
	        {
	            if(Y==1 || X==1)
	            {
	                cout<<-1<<endl;
	            }
	            else if(X%2!=0)
	            {
	                for(int i=0;i<v1.size();i++)
	                {
	                    cout<<v1[i];
	                }
	                cout<<'a';
	                for(int i=v1.size()-1;i>=0;i--)
	                {
	                    cout<<v1[i];
	                }
	                cout<<endl;
	                for(int i=v1.size()-1;i>=0;i--)
	                {
	                    cout<<v1[i];
	                }
	                cout<<'a';
	                for(int i=0;i<v1.size();i++)
	                {
	                    cout<<v1[i];
	                }
	                cout<<endl;
	            }
	            else if(Y%2!=0)
	            {
	                for(int i=0;i<v1.size();i++)
	                {
	                    cout<<v1[i];
	                }
	                cout<<'b';
	                for(int i=v1.size()-1;i>=0;i--)
	                {
	                    cout<<v1[i];
	                }
	                cout<<endl;
	                for(int i=v1.size()-1;i>=0;i--)
	                {
	                    cout<<v1[i];
	                }
	                cout<<'b';
	                for(int i=0;i<v1.size();i++)
	                {
	                    cout<<v1[i];
	                }
	                cout<<endl;
	            }
	        }
	        else{
	            for(int i=0;i<v1.size();i++)
	            {
	                    cout<<v1[i];
	            }
	            for(int i=v1.size()-1;i>=0;i--)
	            {
	                    cout<<v1[i];
	            }
	            cout<<endl;
	            for(int i=v1.size()-1;i>=0;i--)
	            {
	                    cout<<v1[i];
	            }
	            for(int i=0;i<v1.size();i++)
	            {
	                    cout<<v1[i];
	            }
	            cout<<endl;
	        }
	    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	    
	}
	return 0;
}
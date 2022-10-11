#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"Case #"<<i+1<<": ";
        int R,A,B;
        cin>>R>>A>>B;
        double sum=0;
        vector<double>v;
        v.push_back(R);
        while(R!=0)
        {
            R=R*A;
            v.push_back(R);
            R=R/B;
            v.push_back(R);
        }
        
        for(int i=0;i<v.size();i++){
            sum+=M_PI*v[i]*v[i];
        }
        cout<<fixed<<setprecision(6)<<sum<<endl;
    }
    return 0;
}
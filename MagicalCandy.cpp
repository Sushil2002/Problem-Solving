#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        multiset<ll>bags;
        
        for(int i=0;i<n;i++){
            ll candy_cnt;
            cin>>candy_cnt;
            bags.insert(candy_cnt);
        }
        ll total_candies=0;
        for(int i=0;i<k;++i){
            auto last_it=(--bags.end());  //max element
            ll candy_cnt=*last_it;
            //bags.end()->points towards the next iterator of the last NOt the Last Elenet so we need to Subtract 
            //bags.end()+1->will Not Work becuase last_it will cnahge the Only the Location! 
            total_candies+=candy_cnt;
            
            //we cannot delete element by vaule
            bags.erase(last_it);
            bags.insert(candy_cnt/2);
        }
        cout<<total_candies<<endl;
    }
    
    return 0;
}
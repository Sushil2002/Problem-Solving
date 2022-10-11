#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        multiset<int> v;
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            v.insert(A[i]);
        }
        int cnt=1;
        for(auto it:v){
            if((it)>=cnt){
                cnt++;
            }else{
                continue;
            }
        }
        cout<<"Case #"<<i+1<<": ";
        cout<<cnt-1<<endl;
    }
    return 0;
}
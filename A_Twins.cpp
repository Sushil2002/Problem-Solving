#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum+=A[i];
    }
    sort(A, A + n);
    sum=sum/2;
    ll res=0,cnt=0;
    for(int i=n-1;i>=0;i--){
        res+=A[i];
        cnt++;
        if(res>sum){
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
// #include <bits/stdc++.h>
// #include <iostream>
// typedef long long ll;
// using namespace std;
// bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
// {
//     return a.second<b.second;
// }
// // ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
// signed main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         int A[n],B[n];
        
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>B[i];
//         }
//         sort(A,A+n);
//         sort(B,B+n);
//         int i=0,j=n-1;
//         while(k--){
//             if(A[i]<A[j]){
//                 swap(A[i],A[j]);
//             }
//             i++;
//             j--;
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=A[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
signed main(){
    double x=pow(5,2);
    cout<<x<<endl;
    return 0;
}
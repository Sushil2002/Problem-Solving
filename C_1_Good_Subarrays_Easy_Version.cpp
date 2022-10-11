// #include <bits/stdc++.h>
// #include <iostream>
// typedef long long ll;
// using namespace std;
// // ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
// bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
// {
//     return a.second < b.second;
// }
// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i <= sqrt(n); i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }

// int f(vector<ll> arr, int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> arr[i];
//     }
//     ll yt = 1;
//     ll ans = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (arr[i] >= yt)
//         {
//             ans += yt;
//             yt++;
//         }
//         else
//         {

//             ans += arr[i];
//             yt = arr[i] + 1;
//         }
//     }
//     return ans;
// }

// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> arr(n + 1);
//         cout<<f(arr, n)<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return a.second<b.second;
}
signed main(){
    // int t;
    // cin>>t;
    // while(t--){
    // }
    int x=5^7^2^3^2;
    cout<<x<<endl;
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
// bool aj=false;  //for any one subset
int t=2;
void Generate(int index, vector<int> &ds, int arr[], int n, int k, int sum)
{
    if (index == n)
    {
        if (sum == k /*&& aj==false*/ )
        {
            // aj=true;
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
           
        }
        return;
    }
    ds.push_back(arr[index]);
    sum += arr[index];
    Generate(index + 1, ds, arr, n, k, sum);
    sum -= arr[index];
    ds.pop_back();
    Generate(index + 1, ds, arr, n, k, sum);
}
int main()
{
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int sum = 0;
    vector<int> ds;
    Generate(0, ds, A, n, k, sum);
    return 0;
}
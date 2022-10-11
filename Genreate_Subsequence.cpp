#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void Generate(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // to take the element in sequence
    ds.push_back(arr[index]);
    Generate(index + 1, ds, arr, n);
    ds.pop_back();
    // Not take condition->
    Generate(index + 1, ds, arr, n); // For next element
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    vector<int> ds;
    Generate(0, ds, A, n);
    return 0;
}
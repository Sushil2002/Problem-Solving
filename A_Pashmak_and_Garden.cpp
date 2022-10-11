#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
bool ispalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
signed main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    if(x1>x2){
        swap(x1,x2);
        swap(y1,y2);
    }else if(y1>y2){
       swap(x1,x2);
        swap(y1,y2); 
    }
    if ((x1 == x2) && (y1 != y2))
    {
        int diff = (y2 - y1);
        cout << (x1+diff ) << " " << y1 << " " << (x1 + diff) << " " << y2 << endl;
    }
    else if ((x1 != x2) && y1 == y2)
    {
        int diff = (x2 - x1);
        cout << x1 << " " << y1 + diff << " " << x2 << " " << y1 + diff << " " << endl;
    }
    else
    {
        int diff1 = abs(y2 - y1);
        int diff2 = abs(x2 - x1);
        if (diff1 != diff2)
        {
            cout<<-1<<endl;
        }else
            cout << x1 + diff1 << " " << (y1) << " " << x2 - diff2 << " " << (y2) << " " << endl;
    }
    return 0;
}
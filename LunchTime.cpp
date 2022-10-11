#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
// ASCII of 'x'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
bool sortby(const pair<ll, ll> &x, const pair<ll, ll> &y)
{
    return x.second < y.second;
}
int A[8 + 1][8 + 1] = {0};
//------------------------
void xis1(int x ,int y){
      if ((x == 1))
    {
        if (y < 8)
            A[3][y + 1] = 2;
        if (y > 0)
            A[3][y - 1] = 2;
    }
}
//----------------------------
void xis8(int x ,int y){
     if (y < 8)
            A[6][y + 1] = 2;
        if (y > 0)
            A[6][y - 1] = 2;
}
//----------------------------
void yis1(int x ,int y){
    if (x < 8)
            A[x + 1][3] = 2;
        if (x > 0)
            A[x - 1][3] = 2;
}
//----------------------------
void yis8(int x ,int y){
    if (x < 8)
            A[x + 1][6] = 2;
        if (x > 0)
            A[x - 1][6] = 2;
}
//----------------------------
void xis2(int x ,int y){
    if (y == 2)
        {
            A[1][4] = 2;
            A[5][1] = 2;
        }
        else if (y == 7)
        {
            A[1][5] = 2;
            A[5][8] = 2;
        }
        else if (y > 2 && y < 7)
        {
            A[x - 1][y + 2] = 2;
            A[x + 1][y - 2] = 2;
        }
}
//----------------------------
void xis7(int x ,int y){
   if (y == 2)
        {
            A[4][1] = 2;

            A[8][4] = 2;
        }
        else if (y == 7)
        {
            A[5][8] = 2;

            A[8][4] = 2;
        }
        else if (y > 2 && y < 7)
        {
            A[x - 1][y + 2] = 2;
            A[x + 1][y - 2] = 2;
        }
}
//----------------------------
void y2ory7(int x ,int y){
   if (y == 2)
        {
            A[4][1] = 2;

            A[8][4] = 2;
        }
        else if (y == 7)
        {
            A[5][8] = 2;

            A[8][4] = 2;
        }
        else if (y > 2 && y < 7)
        {
            A[x - 1][y + 2] = 2;
            A[x + 1][y - 2] = 2;
        }
}
//----------------------------

void solve(int x, int y)
{
    A[x][y] = 1;
    if ((x == 1))
    {
        // if (y < 8)
        //     A[3][y + 1] = 2;
        // if (y > 0)
        //     A[3][y - 1] = 2;
        xis1( x , y);
    }

    else if (x == 8)
    {
        // if (y < 8)
        //     A[6][y + 1] = 2;
        // if (y > 0)
        //     A[6][y - 1] = 2;
        xis8(x,y);
    }
    else if (y == 1)
    {
        // if (x < 8)
        //     A[x + 1][3] = 2;
        // if (x > 0)
        //     A[x - 1][3] = 2;
        yis1(x,y);
    }
    else if (y == 8)
    {
        // if (x < 8)
        //     A[x + 1][6] = 2;
        // if (x > 0)
        //     A[x - 1][6] = 2;
        yis8(x,y);
    }

    if ((x == 2))
    {
        // if (y == 2)
        // {
        //     A[1][4] = 2;
        //     A[5][1] = 2;
        // }
        // else if (y == 7)
        // {
        //     A[1][5] = 2;
        //     A[5][8] = 2;
        // }
        // else if (y > 2 && y < 7)
        // {
        //     A[x - 1][y + 2] = 2;
        //     A[x + 1][y - 2] = 2;
        // }
        xis2(x,y);
    }

    if ((x == 7))
    { // cout << "x==7\n";
        // if (y == 2)
        // {
        //     A[4][1] = 2;

        //     A[8][4] = 2;
        // }
        // else if (y == 7)
        // {
        //     A[5][8] = 2;

        //     A[8][4] = 2;
          
        // }
        // else if (y > 2 && y < 7)
        // 
          xis7(x,y);
    }
    if ((y == 2) || (y == 7))
    {
        // if (x > 2 && x < 7)
        // {
        //     A[x - 2][y + 1] = 2;
        //     A[x + 2][y - 1] = 2;
        // }
        y2ory7(x,y);
    }
    if ((x > 2) && (y > 2) && (x <= 6) && (y <= 6))
    {
        A[x - 1][y + 2] = 2;
        A[x + 1][y - 2] = 2;
    }
    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        A[8 + 1][8 + 1] ;
        memset(A,0,sizeof(A));
        solve(x, y);
    }
}
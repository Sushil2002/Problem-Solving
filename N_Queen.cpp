#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
vector<vector<string>> ans;
bool issafe(int col, int row, vector<string> &board, int n)
{
    int x = row;
    int y = col;
    // up and previou diagonal
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 'Q')
        {
            return false;
        }
        x--;
        y--;
    }
    x = row;
    y = col;
    // checking the contiguous row
    while (y >= 0)
    {
        if (board[x][y] == 'Q')
        {
            return false;
        }
        y--;
    }
    x = row;
    y = col;
    // previous down diagonal
    while (y >= 0 && x < n)
    {
        if (board[x][y] == 'Q')
        {
            return false;
        }
        x++;
        y--;
    }
    return true;
}

void solve(int col, vector<string> &board, int n)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (issafe(col, row, board, n))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, n);
            board[row][col] = '.';
        }
    }
}
signed main()
{
    int n;
    cin >> n;
    vector<string> board(n);

    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    solve(0, board, n);
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
            cout << endl;
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}


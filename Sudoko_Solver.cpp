#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
bool sortby(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
void solvesudoko(vector<vector<char>> &board)
{
    solve(board);
}

bool solve(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isvalid(board, i, j, c))
                    {
                        board[i][j] = c;
                        if (solve(board) == true)
                        {
                            return true;
                        }
                        else
                        {
                            board[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
bool isvalid(vector<vector<char>> &board, int row, int col, char c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == c)
        {
            return false;
        }
        if (board[row][i] == c)
        {
            return false;
        }
        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == c)
        {
            return false;
        }
    }
    return true;
}

signed main()
{

    // solve(board);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string wonRow(string row)
{
    if (row[0] == row[1]
        && row[0] == row[2]
        && row[1] == row[2]
        && row[0] != '.')
    {
        return string() + row[0];
    }
    return "";
} 

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string board[t];
        string ans;
        ans = "";

        for (int j = 0; j < 3; j++)
        {
            cin >> board[j];
        }

        ans += wonRow(board[0]);
        ans += wonRow(board[1]);
        ans += wonRow(board[2]);
        ans += wonRow(string() + board[0][0] + board[1][0] + board[2][0]);
        ans += wonRow(string() + board[0][1] + board[1][1] + board[2][1]);
        ans += wonRow(string() + board[0][2] + board[1][2] + board[2][2]);
        ans += wonRow(string() + board[0][0] + board[1][1] + board[2][2]);
        ans += wonRow(string() + board[2][0] + board[1][1] + board[0][2]);

        if (ans == "")
        {
            cout << "DRAW" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
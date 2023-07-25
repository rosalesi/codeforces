#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    char p;
    cin >> n >> m >> p;

    set<char> d;
    int xdir[4] = { 0, 1, 0, -1};
    int ydir[4] = { 1, 0, -1, 0};
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c = arr[i][j];
            if (c == p)
            {
                for (int k = 0; k < 4; k++)
                {
                    int newY = i + ydir[k];
                    int newX = j + xdir[k];

                    if (newY > -1 
                        && newY < n 
                        && newX > -1 
                        && newX < m
                        && arr[newY][newX] != p
                        && arr[newY][newX] != '.')
                    {
                        d.insert(arr[newY][newX]);
                    }
                }
            }

        }
    }

    cout << d.size();
    return 0;
}
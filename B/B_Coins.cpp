#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;

        if (s[1] == '>')
        {
            if(s[0] == 'A')
            {
                a += 1;
            }
            else if (s[0] == 'B')
            {
                b += 1;
            }
            else
            {
                c += 1;
            }
        }
        else
        {
            if(s[2] == 'A')
            {
                a += 1;
            }
            else if (s[2] == 'B')
            {
                b += 1;
            }
            else
            {
                c += 1;
            }
        }
    }

    if (a == 1 && b == 1 && c == 1)
    {
        cout << "Impossible";
    }
    else
    {
        if (a == 0)
        {
            cout << 'A';
        }
        else if (b == 0)
        {
            cout << 'B';
        }
        else if (c == 0)
        {
            cout << 'C';
        }

        if (a == 1)
        {
            cout << 'A';
        }
        else if (b == 1)
        {
            cout << 'B';
        }
        else if (c == 1)
        {
            cout << 'C';
        }

        if (a == 2)
        {
            cout << 'A';
        }
        else if (b == 2)
        {
            cout << 'B';
        }
        else if (c == 2)
        {
            cout << 'C';
        }
    }

    return 0;
}
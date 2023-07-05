#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int s, t;
    int first = 0;
    int last = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '.')
        {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] != '.')
        {
            last = i;
            break;
        }
    }

    if (str[first] == 'R' && str[last] == 'R')
    {
        cout << first + 1 << " " << last + 2;
    }
    else if (str[first] == 'L' && str[last] == 'L')
    {
        cout << last + 1 << " " << first;
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'L')
            {
                cout << (first + 1) << " " << (i + 1);
                break;
            }
        }
    }

    return 0;
}
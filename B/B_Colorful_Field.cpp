#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<int> waste;

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;

        a -= 1;
        
        waste.push_back(a * m + b);
    }

    sort(waste.begin(), waste.end());

    string crop[] = { "Grapes", "Carrots", "Kiwis" };

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        a -=1 ;
        int pos = a * m + b;
        int diff = 0;
        for (int p : waste)
        {
            if (p == pos)
            {
                pos = -1;
                break;
            }
            else if (p < pos)
            {
                diff -=1;
            }
            else
            {
                break;
            }

        }

        if (pos == -1)
        {
            cout << "Waste" << endl;
            continue;
        }

        pos += diff;
        pos %= 3;

        cout << crop[pos] << endl;
    }

    return 0;
}
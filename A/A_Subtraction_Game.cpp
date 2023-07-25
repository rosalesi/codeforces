#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a > 1 && b > 1)
        {
            cout << 1 << endl;;
        }
        else if (a < b && a * 2 < b)
        {
            cout << a * 2 << endl;
        }
        else if (a < b && a * 2 >= b)
        {
            cout << (a * 2) + 1 << endl;;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }
    return 0;
}
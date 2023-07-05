#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool justCeiled = false;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        double d = (double)num / 2;
        if (num % 2 == 0)
        {
            cout << (int)(num / 2) << endl;
        }
        else
        {
            if (!justCeiled)
            {
                cout << (int)ceil(d) << endl;
                justCeiled = true;
            }
            else
            {
                cout << (int)floor(d) << endl;
                justCeiled = false;
            }
        }
    }


}
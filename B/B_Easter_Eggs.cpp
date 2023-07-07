#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string colors = "ROYGBIV";

    string ans = "";
    int idx = 0;
    while (n > 0)
    {
        ans += colors[idx];
        idx += 1;

        if (idx == 7)
        {
            idx -= 4;
        }
        n -=1;
    }

    cout << ans;

    return 0;
}
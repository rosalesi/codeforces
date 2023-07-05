#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 1;
    cin >> n;

    while(n != 1)
    {
        if (n % 2 != 0)
        {
            ans += 1;
            n -= 1;
            n /= 2;
        }
        else
        {
            n /= 2;
        }
    }

    cout << ans;
    return 0;
}
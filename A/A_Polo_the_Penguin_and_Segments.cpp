#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        diff += (r - l) + 1;
    }
    
    int remainder = diff % k;

    if (remainder == 0)
    {
        cout << 0;
    }
    else
    {
        cout << k - remainder;
    }

    return 0;
}
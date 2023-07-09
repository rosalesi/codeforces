#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, ans;
        ans = 0;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int a , b;
            cin >> a >> b;

            if (a > b)
            {
                ans += 1;
            }
        }
        cout << ans << endl;
    }
}
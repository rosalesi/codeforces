#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;

    map<int, int> matches;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        if (matches.find(b) == matches.end())
        {
            matches[b] = 0;
        }
        matches[b] += a;
    }


    int ans = 0;
    while(n > 0 && matches.size() > 0)
    {

        int maxMatch = 0;
        for (auto const& [key, val] : matches)
        {
            if(key > maxMatch)
            {
                maxMatch = key;
            }
        }

        if (matches[maxMatch] >= n)
        {
            ans += n * maxMatch;
            cout << ans;
            return 0;
        }
        else
        {
            ans += matches[maxMatch] * maxMatch;
            n -= matches[maxMatch];
            matches.erase(maxMatch);
        }
    }

    cout << ans;
}
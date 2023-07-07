#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    bool justLefted = true;

    if (n % 2 == 0)
    {
        justLefted = false;
    }

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (justLefted)
        {
            ans += c;
            justLefted = false;
        }
        else
        {
            ans = c + ans;
            justLefted = true;
        }
    }

    cout << ans;
    
}